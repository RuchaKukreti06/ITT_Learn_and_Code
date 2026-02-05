#include <iostream>

#include "Customer.h"
#include "InputHandler.h"
#include "OutputHandler.h"
#include "Paperboy.h"
#include "Wallet.h"

int main() {
  std::string firstName = InputHandler::inputFirstName();
  std::string lastName = InputHandler::inputLastName();
  double walletBalance = InputHandler::inputWalletBalance();

  Paperboy paperboy;
  Customer customer({firstName, lastName}, walletBalance);
  bool isPaymentSuccessful =
      paperboy.collectPayment(customer, NEWSPAPER_CHARGE);
  OutputHandler::showPaymentstatus(isPaymentSuccessful);

  return 0;
}