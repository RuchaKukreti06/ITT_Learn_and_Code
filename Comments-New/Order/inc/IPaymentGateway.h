#pragma once

#include <future>
#include <string>

#include "PaymentResult.h"

class IPaymentGateway
{
   public:
    virtual ~IPaymentGateway() = default;

    virtual std::future<PaymentResult> processPayment(const std::string& customerId, double amount,
                                                      const std::string& paymentMethod) = 0;

    virtual std::future<void> refundPayment(const std::string& transactionId) = 0;
};
