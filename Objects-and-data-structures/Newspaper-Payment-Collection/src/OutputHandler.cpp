#include "OutputHandler.h"

void OutputHandler::showPaymentStatus(bool isPaymentSuccessful)
{
    if (isPaymentSuccessful)
    {
        std::cout << "Payment Successful" << std::endl;
    }
    else
    {
        std::cout << "Payment Failed" << std::endl;
    }
}
