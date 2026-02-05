#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

#include "Constant.h"
#include "Wallet.h"
#include "types.h"

class Customer {
private:
  Name name;
  Wallet wallet;

public:
  Customer(const Name name, double initialMoney);
  std::string getFirstName() const;
  std::string getLastName() const;
  bool pay(double amount);
};

#endif
