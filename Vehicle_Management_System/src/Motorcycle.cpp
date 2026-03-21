#include "Motorcycle.h"

#include <iostream>

#include "VehicleConstants.h"

Motorcycle::Motorcycle(const VehicleRecord vehicleRecord, const int fuel)
    : Vehicle(vehicleRecord), fuelLevel(fuel), hasSidecar(false)
{
}

void Motorcycle::Start()
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

void Motorcycle::Stop()
{
    vehicleRecord.isRunning = false;
    std::cout << vehicleRecord.make << " " << vehicleRecord.model << " stopped.\n";
}

void Motorcycle::DisplayInfo() const
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

void Motorcycle::Refuel(double amount)
{
    fuelLevel += amount;
    std::cout << "Refueled. Fuel level: " << fuelLevel << "%\n";
}
