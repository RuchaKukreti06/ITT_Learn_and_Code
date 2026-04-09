#ifndef TOUCHPAD_H
#define TOUCHPAD_H

#include "inputDevice.h"

class Touchpad : public InputDevice {
public:
  std::string readInput() override;
};

#endif
