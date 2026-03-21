#ifndef I_VEHICLE_H
#define I_VEHICLE_H

#include <iostream>
#include <string>

class IVehicle
{
   public:
    virtual ~IVehicle() = default;
    virtual void Start() = 0;
    virtual void Stop() = 0;
    virtual void DisplayInfo() const = 0;
    virtual double getPrice() const = 0;
};

#endif
