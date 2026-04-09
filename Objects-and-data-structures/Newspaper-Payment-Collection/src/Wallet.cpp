#include "Wallet.h"

Wallet::Wallet(double initialAmount) : balance(initialAmount)
{
}

bool Wallet::withdraw(double amount)
{
    bool isWithdrawalSuccessful = false;
    if (balance >= amount)
    {
        balance -= amount;
        isWithdrawalSuccessful = true;
    }
    return isWithdrawalSuccessful;
}

bool Wallet::deposit(double amount)
{
    bool isDepositSuccessful = false;
    if (amount > 0)
    {
        balance += amount;
        isDepositSuccessful = true;
    }
    return isDepositSuccessful;
}
