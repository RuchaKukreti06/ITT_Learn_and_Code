#include "keyboard.h"
#include "microphone.h"
#include "touchpad.h"
#include <iostream>
#include <vector>

int main() {
  Keyboard keyboard;
  Microphone mic;
  Touchpad touchpad;

  std::vector<InputDevice *> devices = {&keyboard, &mic, &touchpad};
  for (auto device : devices) {
    std::string input = device->readInput();
    std::cout << "Input captured: " << input << std::endl << std::endl;
  }

  return 0;
}
