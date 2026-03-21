#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "IElectricOperable.h"
#include "Vehicle.h"

class ElectricCar : public Vehicle, public IElectricOperable
{
   private:
    double batteryLevel;

   public:
    ElectricCar(const VehicleRecord vehicleRecord, const int battery);
    void Start() override;
    void Stop() override;
    void DisplayInfo() const override;
    double getPrice() const override;
    double getBatteryLevel() const override;
    void charge(double batteryUnit) override;
};

#endif
