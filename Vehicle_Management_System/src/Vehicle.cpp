#include "Vehicle.h"

#include <stdexcept>

#include "VehicleConstants.h"

Vehicle::Vehicle(const VehicleRecord& vehicleRecord)
{
    this->vehicleRecord.year = vehicleRecord.year;
    this->vehicleRecord.make = vehicleRecord.make;
    this->vehicleRecord.model = vehicleRecord.model;
    this->vehicleRecord.price = vehicleRecord.price;
    this->vehicleRecord.isRunning = vehicleRecord.isRunning;
}

std::string Vehicle::getMake() const
{
    return vehicleRecord.make;
}
std::string Vehicle::getModel() const
{
    return vehicleRecord.model;
}
int Vehicle::getYear() const
{
    return vehicleRecord.year;
}
double Vehicle::getPrice() const
{
    return vehicleRecord.price;
}

void Vehicle::setPrice(double price)
{
    if (price < MIN_VEHICLE_PRICE || price > MAX_VEHICLE_PRICE)
        throw std::invalid_argument("Invalid price");
    vehicleRecord.price = price;
}

bool Vehicle::getIsRunning() const
{
    return vehicleRecord.isRunning;
}

void Vehicle::setVehicleDetails(const VehicleRecord& vehicleRecord)
{
    this->vehicleRecord.year = vehicleRecord.year;
    this->vehicleRecord.make = vehicleRecord.make;
    this->vehicleRecord.model = vehicleRecord.model;
    this->vehicleRecord.price = vehicleRecord.price;
}
