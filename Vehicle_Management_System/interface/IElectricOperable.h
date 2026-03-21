#ifndef I_ELECTRIC_OPERABLE_H
#define I_ELECTRIC_OPERABLE_H

#include <iostream>
#include <string>

class IElectricOperable
{
   public:
    virtual ~IElectricOperable() = default;
    virtual double getBatteryLevel() const = 0;
    virtual void charge(double batteryUnit) = 0;
};

#endif
