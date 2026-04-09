#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

#include "CustomerTypes.h"
#include "Wallet.h"

class Customer
{
   private:
    CustomerName customerName;
    Wallet wallet;

   public:
    Customer(const CustomerName customerName, double balance);
    std::string getFirstName() const;
    std::string getLastName() const;
    bool pay(double amount);
};

#endif
