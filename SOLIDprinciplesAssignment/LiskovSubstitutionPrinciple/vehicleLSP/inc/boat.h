#ifndef BOAT_H
#define BOAT_H

#include "vehicle.h"

class Boat : public Vehicle {
public:
  void move() override;
  std::string getType() override;
};

#endif
