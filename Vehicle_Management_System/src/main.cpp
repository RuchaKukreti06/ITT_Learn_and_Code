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
    manager.addVehicle(std::move(car));

    InputHandler::inputVehicleDetails(vehicleRecord);
    bool hasSidecar = InputHandler::queryHasSidecar();

    auto bike = std::make_unique<Motorcycle>(vehicleRecord, hasSidecar);
    manager.addVehicle(std::move(bike));

    InputHandler::inputVehicleDetails(vehicleRecord);
    int batteryLevel = InputHandler::inputBatteryLevel();

    auto ev = std::make_unique<ElectricCar>(vehicleRecord, batteryLevel);
    manager.addVehicle(std::move(ev));

    std::cout << "\n=== Vehicles ===\n";
    manager.displayAll();

    std::cout << "\nTotal Value: $" << manager.totalValue() << "\n";
    std::cout << "\nStarting all vehicles:\n";
    manager.startAll();

    return 0;
}
