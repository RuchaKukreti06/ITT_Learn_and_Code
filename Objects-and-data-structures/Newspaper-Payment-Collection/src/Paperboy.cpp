#include "Paperboy.h"

bool Paperboy::collectPayment(Customer& customer, double paymentAmount)
{
    bool isPaymentSuccessful = false;
    if (customer.pay(paymentAmount))
    {
        isPaymentSuccessful = true;
    }
    return isPaymentSuccessful;
}
