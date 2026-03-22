#include "VehicleManager.h"

#include <iostream>

void VehicleManager::addVehicle(std::unique_ptr<Vehicle> vehicle)
{
    vehicles.push_back(std::move(vehicle));
}

void VehicleManager::displayAll() const
{
    for (const auto& vehicle : vehicles) vehicle->displayInfo();
}

double VehicleManager::totalValue() const
{
    double totalValue = 0;
    for (const auto& vehicle : vehicles) totalValue += vehicle->getPrice();
    return totalValue;
}

void VehicleManager::startAll()
{
    for (auto& vehicle : vehicles) vehicle->start();
}
