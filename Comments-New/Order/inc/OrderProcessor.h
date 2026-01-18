#pragma once

#include <future>
#include <memory>
#include <string>

#include "IInventoryService.h"
#include "INotificationService.h"
#include "IPaymentGateway.h"
#include "Order.h"
#include "OrderResult.h"

class OrderProcessor
{
   public:
    OrderProcessor(std::shared_ptr<IPaymentGateway> paymentGateway,
                   std::shared_ptr<IInventoryService> inventoryService,
                   std::shared_ptr<INotificationService> notificationService);

    std::future<OrderResult> processOrder(const Order& order);
    bool OrderProcessor::validateOrder(const Order& order) const;
    bool OrderProcessor::checkAndReserveInventory(const Order& order);
    OrderResult OrderProcessor::handlePayment(const Order& order);
    std::future<void> cancelOrder(const std::string& orderId);

   private:
    bool isValidOrder(const Order& order) const;

    std::future<Order> getOrderById(const std::string& orderId);
    std::future<void> saveOrder(const Order& order);

   private:
    std::shared_ptr<IPaymentGateway> paymentGateway_;
    std::shared_ptr<IInventoryService> inventoryService_;
    std::shared_ptr<INotificationService> notificationService_;
};
