#include "OutputHandler.h"

void OutputHandler::showPaymentstatus(bool isPaymentSuccessful) {
  if (isPaymentSuccessful) {
    std::cout << "Payment Successful" << std::endl;
  } else {
    std::cout << "Payment Failed" << std::endl;
  }
}
