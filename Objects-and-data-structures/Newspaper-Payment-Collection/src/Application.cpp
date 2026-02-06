#include "Application.h"

#include <string>

#include "Customer.h"
#include "InputHandler.h"
#include "NewspaperPricing.h"
#include "OutputHandler.h"
#include "Paperboy.h"

void Application::run()
{
    std::string firstName = InputHandler::inputFirstName();
    std::string lastName = InputHandler::inputLastName();
    double walletBalance = InputHandler::inputWalletBalance();

    Customer customer({firstName, lastName}, walletBalance);
    Paperboy paperboy;

    bool paymentSuccessful = paperboy.collectPayment(customer, SUBSCRIPTION_FEE);

    OutputHandler::showPaymentStatus(paymentSuccessful);
}
