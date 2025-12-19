#include "bike.h"

void Bike::move() { std::cout << "Bike is moving on road." << std::endl; }

void Bike::driveOnRoad() {
  std::cout << "Bike is driving on the road." << std::endl;
}

std::string Bike::getType() { return "Bike"; }
