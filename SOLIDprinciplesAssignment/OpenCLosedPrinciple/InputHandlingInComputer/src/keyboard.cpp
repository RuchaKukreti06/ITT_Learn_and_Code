#include "keyboard.h"
#include <iostream>

std::string Keyboard::readInput() {
  std::string input;
  std::cout << "Enter keyboard input: ";
  std::getline(std::cin, input);
  return input;
}
