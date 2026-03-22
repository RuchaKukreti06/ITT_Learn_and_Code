#include "Car.h"

#include <iostream>

Car::Car(const VehicleRecord vehicleRecord, const int fuel) : Vehicle(vehicleRecord)
{
    fuelLevel = fuel;
}

void Car::start()
{
    if (fuelLevel > 0)
    {
        vehicleRecord.isRunning = true;
        std::cout << vehicleRecord.make << " " << vehicleRecord.model << " started.\n";
    }
    else
    {
        std::cout << "Cannot start - no fuel!\n";
    }
}

void Car::stop()
{
    vehicleRecord.isRunning = false;
    std::cout << vehicleRecord.make << " " << vehicleRecord.model << " stopped.\n";
}

void Car::displayInfo() const
{
    std::cout << "Car" << vehicleRecord.year << " " << vehicleRecord.make << " "
              << vehicleRecord.model << ", Price: $" << vehicleRecord.price
              << ", Fuel: " << fuelLevel << "%\n";
}

double Car::getPrice() const
{
    return vehicleRecord.price;
}

double Car::getFuelLevel() const
{
    return fuelLevel;
}

void Car::refuel(double FuelAmount)
{
    fuelLevel += FuelAmount;
    std::cout << "Refueled: " << fuelLevel << "%\n";
}
