#ifndef BIKE_H
#define BIKE_H

#include "vehicle.h"

class Bike : public Vehicle {
public:
  void move() override;
  void driveOnRoad() override;
  std::string getType() override;
};

#endif
