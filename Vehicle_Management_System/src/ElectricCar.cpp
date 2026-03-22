#include "ElectricCar.h"

#include <iostream>

ElectricCar::ElectricCar(const VehicleRecord vehicleRecord, const int battery)
    : Vehicle(vehicleRecord)
{
    batteryLevel = battery;
}

void ElectricCar::start()
{
    if (batteryLevel > 0)
    {
        vehicleRecord.isRunning = true;
        std::cout << vehicleRecord.make << " " << vehicleRecord.model
                  << " electric motor started.\n";
    }
    else
    {
        std::cout << "Cannot start - battery dead!\n";
    }
}
void ElectricCar::stop()
{
    vehicleRecord.isRunning = false;
    std::cout << vehicleRecord.make << " " << vehicleRecord.model << " stopped.\n";
}

void ElectricCar::displayInfo() const
{
    std::cout << "Electric Car: " << vehicleRecord.year << " " << vehicleRecord.make << " "
              << vehicleRecord.model << ", Price: $" << vehicleRecord.price
              << ", Battery: " << batteryLevel << "%\n";
}

double ElectricCar::getPrice() const
{
    return vehicleRecord.price;
}

double ElectricCar::getBatteryLevel() const
{
    return batteryLevel;
}

void ElectricCar::charge(double batteryUnit)
{
    batteryLevel += batteryUnit;
    std::cout << "Charged. Battery level: " << batteryLevel << "%\n";
}
