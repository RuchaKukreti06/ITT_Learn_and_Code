#ifndef I_GEOCODING_SERVICE_H
#define I_GEOCODING_SERVICE_H

#include <string>
#include <vector>

#include "Location.h"

class IGeocodingService
{
   public:
    virtual ~IGeocodingService() = default;

    virtual std::vector<Location> getCoordinates(const std::string& locationName) = 0;
};

#endif
