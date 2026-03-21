#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "IFuelOperable.h"
#include "Vehicle.h"

class Motorcycle : public Vehicle, public IFuelOperable
{
   private:
    double fuelLevel;
    bool hasSidecar;

   public:
    Motorcycle(const VehicleRecord vehicleRecord, const int fuel);
    void Start() override;
    void Stop() override;
    void DisplayInfo() const override;
    double getPrice() const override;
    double getFuelLevel() const override;
    void Refuel(double amount) override;
};

#endif
