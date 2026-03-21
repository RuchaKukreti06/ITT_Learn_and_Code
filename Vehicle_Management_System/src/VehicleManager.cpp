#include "VehicleManager.h"

#include <iostream>

void VehicleManager::AddVehicle(std::unique_ptr<Vehicle> vehicle)
{
    vehicles.push_back(std::move(vehicle));
}

void VehicleManager::DisplayAll() const
{
    for (const auto& vehicle : vehicles) vehicle->DisplayInfo();
}

double VehicleManager::TotalValue() const
{
    double totalValue = 0;
    for (const auto& vehicle : vehicles) totalValue += vehicle->getPrice();
    return totalValue;
}

void VehicleManager::StartAll()
{
    for (auto& vehicle : vehicles) vehicle->Start();
}
