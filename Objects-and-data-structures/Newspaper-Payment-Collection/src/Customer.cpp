#include "Customer.h"

Customer::Customer(const CustomerName customerName, double balance)
    : customerName(customerName), wallet(balance)
{
}

std::string Customer::getFirstName() const
{
    return customerName.firstName;
}

std::string Customer::getLastName() const
{
    return customerName.lastName;
}

bool Customer::pay(double amount)
{
    return wallet.withdraw(amount);
}
