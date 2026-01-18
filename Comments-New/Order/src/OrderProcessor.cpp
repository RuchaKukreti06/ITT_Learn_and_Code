#include "OrderProcessor.h"

#include <future>
#include <iostream>
#include <stdexcept>
#include <utility>

OrderProcessor::OrderProcessor(std::shared_ptr<IPaymentGateway> paymentGateway,
                               std::shared_ptr<IInventoryService> inventoryService,
                               std::shared_ptr<INotificationService> notificationService)
    : paymentGateway_(std::move(paymentGateway)),
      inventoryService_(std::move(inventoryService)),
      notificationService_(std::move(notificationService))
{
}

std::future<OrderResult> OrderProcessor::processOrder(const Order& order)
{
    return std::async(std::launch::async,
                      [this, order]()
                      {
                          if (!validateOrder(order))
                          {
                              return OrderResult::validationFailed("Order validation failed");
                          }

                          if (!checkAndReserveInventory(order))
                          {
                              return OrderResult::processingFailed("Insufficient inventory");
                          }

                          try
                          {
                              return handlePayment(order);
                          }
                          catch (const std::exception& ex)
                          {
                              inventoryService_->releaseReservation(order.items).get();
                              std::cerr << "Error: " << ex.what() << std::endl;
                              throw;
                          }
                      });
}

bool OrderProcessor::validateOrder(const Order& order) const
{
    return !order.items.empty() && order.totalAmount > 0;
}

bool OrderProcessor::checkAndReserveInventory(const Order& order)
{
    bool hasInventory = inventoryService_->checkAvailability(order.items).get();
    if (!hasInventory) return false;

    inventoryService_->reserveItems(order.items).get();
    return true;
}

OrderResult OrderProcessor::handlePayment(const Order& order)
{
    auto paymentResult =
        paymentGateway_->processPayment(order.customerId, order.totalAmount, order.paymentMethod)
            .get();

    if (paymentResult.isSuccessful)
    {
        inventoryService_->commitReservation(order.items).get();
        notificationService_->sendOrderConfirmation(order).get();
        return OrderResult::success(paymentResult.transactionId);
    }

    // Payment failed: revert reserved inventory to make it available for other orders
    inventoryService_->releaseReservation(order.items).get();
    return OrderResult::processingFailed("Payment failed: " + paymentResult.errorMessage);
}

std::future<void> OrderProcessor::cancelOrder(const std::string& orderId)
{
    return std::async(std::launch::async,
                      [this, orderId]()
                      {
                          Order order = getOrderById(orderId).get();

                          if (order.status == OrderStatus::Paid)
                          {
                              paymentGateway_->refundPayment(order.transactionId).get();
                              inventoryService_->restoreInventory(order.items).get();
                          }

                          order.status = OrderStatus::Cancelled;
                          saveOrder(order).get();
                      });
}

std::future<Order> OrderProcessor::getOrderById(const std::string&)
{
    return std::async(std::launch::async, [] { return Order{}; });
}

std::future<void> OrderProcessor::saveOrder(const Order&)
{
    return std::async(std::launch::async, [] {});
}
