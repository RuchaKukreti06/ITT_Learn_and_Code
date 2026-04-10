#ifndef GEOCODING_SERVICE_H
#define GEOCODING_SERVICE_H

#include "HttpClient.h"
#include "IGeocodingService.h"
#include "ResponseParser.h"

class GeocodingService : public IGeocodingService
{
   public:
    GeocodingService(const HttpClient& httpClient, const ResponseParser& parser);

    std::vector<Location> getCoordinates(const std::string& locationName) override;

   private:
    HttpClient httpClient;
    ResponseParser parser;

    std::string buildUrl(const std::string& locationName) const;
};

#endif
