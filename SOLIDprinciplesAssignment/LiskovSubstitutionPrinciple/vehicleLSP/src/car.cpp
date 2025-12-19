#include "car.h"

void Car::move() { std::cout << "Car is moving on road." << std::endl; }

void Car::driveOnRoad() {
  std::cout << "Car is driving on the road." << std::endl;
}

std::string Car::getType() { return "Car"; }
