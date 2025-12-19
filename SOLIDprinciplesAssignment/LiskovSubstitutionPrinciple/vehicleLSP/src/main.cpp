#include "bike.h"
#include "boat.h"
#include "car.h"
#include <iostream>

int main() {
  Vehicle *vehicle;
  int choice = 0;
  std::cout << "Choose your vehicle: 1: car 2:Bike  3:Boat\n:";
  std::cin >> choice;
  if (choice == 1) {
    vehicle = new Car();
  } else if (choice == 2) {
    vehicle = new Bike();
  } else if (choice == 3) {
    vehicle = new Boat();
  }

  std::cout << vehicle->getType() << ": ";
  vehicle->move();
  try {
    vehicle->driveOnRoad();
  } catch (std::exception &e) {
    std::cout << e.what();
  }

  return 0;
}
