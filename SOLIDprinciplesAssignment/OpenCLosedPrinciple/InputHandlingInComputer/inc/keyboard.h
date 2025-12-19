#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "inputDevice.h"

class Keyboard : public InputDevice {
public:
  std::string readInput() override;
};

#endif
