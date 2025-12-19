#ifndef INPUT_DEVICE_H
#define INPUT_DEVICE_H

#include <string>

class InputDevice {
public:
  virtual ~InputDevice() = default;
  virtual std::string readInput() = 0;
};

#endif
