#include "Motorcycle.h"

#include <iostream>

#include "VehicleConstants.h"

Motorcycle::Motorcycle(const VehicleRecord vehicleRecord, const int fuelLevel)
    : Vehicle(vehicleRecord), fuelLevel(fuelLevel), hasSidecar(false)
{
}

void Motorcycle::start()
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

void Motorcycle::stop()
{
    vehicleRecord.isRunning = false;
    std::cout << vehicleRecord.make << " " << vehicleRecord.model << " stopped.\n";
}

void Motorcycle::displayInfo() const
{
    std::cout << "Motorcycle: " << vehicleRecord.year << " " << vehicleRecord.make << " "
              << vehicleRecord.model << ", Price: $" << vehicleRecord.price
              << ", Fuel: " << fuelLevel << "%"
              << ", Sidecar: " << (hasSidecar ? "Yes" : "No") << "\n";
}

double Motorcycle::getPrice() const
{
    return vehicleRecord.price;
}

double Motorcycle::getFuelLevel() const
{
    return fuelLevel;
}

void Motorcycle::refuel(double amount)
{
    fuelLevel += amount;
    std::cout << "Refueled. Fuel level: " << fuelLevel << "%\n";
}
