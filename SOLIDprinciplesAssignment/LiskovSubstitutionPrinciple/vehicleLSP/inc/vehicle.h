#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

class Vehicle {
public:
  virtual void move() = 0;
  virtual void driveOnRoad() {
    throw std::logic_error("This vehicle cannot drive on road");
  }
  virtual std::string getType() = 0;
  virtual ~Vehicle() {}
};

#endif
