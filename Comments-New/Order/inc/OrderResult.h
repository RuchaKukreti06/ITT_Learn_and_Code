#pragma once

#include <string>

class OrderResult
{
   public:
    static OrderResult success(const std::string& transactionId)
    {
        return OrderResult(true, transactionId, "");
    }

    static OrderResult validationFailed(const std::string& message)
    {
        return OrderResult(false, "", message);
    }

    static OrderResult processingFailed(const std::string& message)
    {
        return OrderResult(false, "", message);
    }

    bool isSuccess() const
    {
        return success_;
    }

    const std::string& message() const
    {
        return message_;
    }

    const std::string& transactionId() const
    {
        return transactionId_;
    }

   private:
    OrderResult(bool success, std::string transactionId, std::string message)
        : success_(success), transactionId_(std::move(transactionId)), message_(std::move(message))
    {
    }

   private:
    bool success_;
    std::string transactionId_;
    std::string message_;
};
