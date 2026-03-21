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
    void AddVehicle(std::unique_ptr<Vehicle> vehicle);
    void DisplayAll() const;
    double TotalValue() const;
    void StartAll();
};

#endif
