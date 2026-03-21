#ifndef CAR_H
#define CAR_H

#include "IFuelOperable.h"
#include "Vehicle.h"
#include "VehicleRecord.h"

class Car : public Vehicle, public IFuelOperable
{
   private:
    double fuelLevel;

   public:
    Car(const VehicleRecord vehicleRecord, const int fuel);
    void Start() override;
    void Stop() override;
    void DisplayInfo() const override;
    double getPrice() const override;
    double getFuelLevel() const override;
    void Refuel(double amount) override;
};

#endif
