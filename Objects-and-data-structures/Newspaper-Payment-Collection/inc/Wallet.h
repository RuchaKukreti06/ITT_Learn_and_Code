#ifndef WALLET_H
#define WALLET_H

class Wallet {
private:
  double balance;

public:
  Wallet(double initialAmount);
  bool withdraw(double amount);
  bool deposit(double amount);
};

#endif
