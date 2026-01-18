#pragma once

#include <future>

#include "Order.h"

class INotificationService
{
   public:
    virtual ~INotificationService() = default;

    virtual std::future<void> sendOrderConfirmation(const Order& order) = 0;
};
