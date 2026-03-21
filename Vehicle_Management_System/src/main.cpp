#include <iostream>
#include <memory>

#include "Car.h"
#include "ElectricCar.h"
#include "InputHandlers.h"
#include "Motorcycle.h"
#include "VehicleConstants.h"
#include "VehicleManager.h"

int main()
{
    VehicleManager manager;
    VehicleRecord vehicleRecord;

    InputHandler::inputVehicleDetails(vehicleRecord);
    int fuelLevel = InputHandler::inputFuelLevel();

    auto car = std::make_unique<Car>(vehicleRecord, fuelLevel);
    manager.AddVehicle(std::move(car));

    InputHandler::inputVehicleDetails(vehicleRecord);
    bool hasSidecar = InputHandler::inputhasSidecar();

    auto bike = std::make_unique<Motorcycle>(vehicleRecord, hasSidecar);
    manager.AddVehicle(std::move(bike));

    InputHandler::inputVehicleDetails(vehicleRecord);
    int batteryLevel = InputHandler::inputBatteryLevel();

    auto ev = std::make_unique<ElectricCar>(vehicleRecord, batteryLevel);
    manager.AddVehicle(std::move(ev));

    std::cout << "\n=== Vehicles ===\n";
    manager.DisplayAll();

    std::cout << "\nTotal Value: $" << manager.TotalValue() << "\n";
    std::cout << "\nStarting all vehicles:\n";
    manager.StartAll();

    return 0;
}
