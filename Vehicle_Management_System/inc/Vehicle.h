#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

#include "IVehicle.h"
#include "VehicleRecord.h"

class Vehicle : public IVehicle
{
   protected:
    VehicleRecord vehicleRecord;

   public:
    Vehicle(const VehicleRecord& vehicleRecord);
    virtual ~Vehicle() = default;

    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getPrice() const;
    void setPrice(double price);
    bool getIsRunning() const;
    void setVehicleDetails(const VehicleRecord& vehicleRecord);
};

#endif
