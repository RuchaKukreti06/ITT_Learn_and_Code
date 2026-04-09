#pragma once
#include <string>

struct PaymentResult
{
    bool isSuccessful = false;
    std::string transactionId;
    std::string errorMessage;
};
