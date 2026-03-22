#ifndef I_VEHICLE_H
#define I_VEHICLE_H

#include <iostream>
#include <string>

class IVehicle
{
   public:
    virtual ~IVehicle() = default;
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual void displayInfo() const = 0;
    virtual double getPrice() const = 0;
};

#endif
