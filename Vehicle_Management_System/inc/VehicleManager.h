#ifndef VEHICLE_MANAGER_H
#define VEHICLE_MANAGER_H

#include <memory>
#include <vector>

#include "Vehicle.h"

class VehicleManager
{
   private:
    std::vector<std::unique_ptr<Vehicle>> vehicles;

   public:
    void addVehicle(std::unique_ptr<Vehicle> vehicle);
    void displayAll() const;
    double totalValue() const;
    void startAll();
};

#endif
