#ifndef I_FUEL_OPERABLE_H
#define I_FUEL_OPERABLE_H

#include <iostream>
#include <string>

class IFuelOperable
{
   public:
    virtual ~IFuelOperable() = default;
    virtual double getFuelLevel() const = 0;
    virtual void refuel(double amount) = 0;
};

#endif
