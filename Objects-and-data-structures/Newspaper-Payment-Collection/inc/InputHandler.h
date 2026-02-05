#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include <iostream>

class InputHandler {
public:
  static std::string inputFirstName();
  static std::string inputLastName();
  static double inputWalletBalance();
};

#endif