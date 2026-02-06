#include "InputHandler.h"

std::string InputHandler::inputFirstName()
{
    std::string firstName;
    std::cout << "Enter customer details:\nFirst name:";
    std::cin >> firstName;
    return firstName;
}

std::string InputHandler::inputLastName()
{
    std::string lastName;
    std::cout << "Last name:";
    std::cin >> lastName;
    return lastName;
}

double InputHandler::inputWalletBalance()
{
    double walletBalance;
    std::cout << "Initial money in wallet:";
    std::cin >> walletBalance;
    return walletBalance;
}
