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
    Motorcycle(const VehicleRecord vehicleRecord, const int fuelLevel);
    void start() override;
    void stop() override;
    void displayInfo() const override;
    double getPrice() const override;
    double getFuelLevel() const override;
    void refuel(double amount) override;
};

#endif
