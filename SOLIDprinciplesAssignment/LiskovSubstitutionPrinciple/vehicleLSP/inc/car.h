#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car : public Vehicle {
public:
  void move() override;
  void driveOnRoad() override;
  std::string getType() override;
};

#endif
