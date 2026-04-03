#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include <string>

#include "Vehicle.h"

class InputHandler
{
   public:
    static void inputVehicleDetails(VehicleRecord& vehicleRecord);
    static int inputFuelLevel();
    static bool queryHasSidecar();
    static int inputBatteryLevel();
};

#endif
