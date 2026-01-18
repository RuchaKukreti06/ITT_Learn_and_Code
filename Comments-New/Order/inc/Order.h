#pragma once

#include <string>
#include <vector>

enum class OrderStatus
{
    Created,
    Paid,
    Cancelled
};

struct Order
{
    std::string id;
    std::string customerId;
    std::string paymentMethod;
    std::string transactionId;
    std::vector<std::string> items;
    double totalAmount = 0.0;
    OrderStatus status = OrderStatus::Created;
};
