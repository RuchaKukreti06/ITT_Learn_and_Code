#include "Customer.h"

Customer::Customer(const Name customerName, double initialMoney)
    : name(customerName), wallet(initialMoney) {}

std::string Customer::getFirstName() const { return name.firstName; }

std::string Customer::getLastName() const { return name.lastName; }

bool Customer::pay(double amount) { return wallet.withdraw(amount); }
