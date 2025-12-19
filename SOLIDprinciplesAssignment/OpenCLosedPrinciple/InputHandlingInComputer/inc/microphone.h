#ifndef MICROPHONE_H
#define MICROPHONE_H

#include "inputDevice.h"

class Microphone : public InputDevice {
public:
  std::string readInput() override;
};

#endif
