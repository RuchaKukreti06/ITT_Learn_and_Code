#include <iostream>

#include "InputHandlers.h"

void InputHandler::inputVehicleDetails(VehicleRecord& vehicleRecord)
{
    std::cout << "Enter Year: ";
    std::cin >> vehicleRecord.year;

    std::cout << "Enter price: ";
    std::cin >> vehicleRecord.price;

    std::cout << "Enter model: ";
    std::cin >> vehicleRecord.model;

    std::cout << "Enter make: ";
    std::cin >> vehicleRecord.make;
}

int InputHandler::inputFuelLevel()
{
    int fuelLevel;
    std::cout << "Enter fuel level: ";
    std::cin >> fuelLevel;
    return fuelLevel;
}

bool InputHandler::queryHasSidecar()
{
    bool hasSidecar;
    std::cout << "Enter 1 if Sidecar is present: ";
    std::cin >> hasSidecar;
    return hasSidecar;
}

int InputHandler::inputBatteryLevel()
{
    int batteryLevel;
    std::cout << "Enter battery level: ";
    std::cin >> batteryLevel;
    return batteryLevel;
}
