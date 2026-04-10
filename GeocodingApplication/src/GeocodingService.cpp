#include "GeocodingService.h"

#include <stdexcept>

#include "Config.h"
#include "Constants.h"

GeocodingService::GeocodingService(const HttpClient& httpClient, const ResponseParser& parser)
    : httpClient(httpClient), parser(parser)
{
}

std::vector<Location> GeocodingService::getCoordinates(const std::string& locationName)
{
    std::string url = buildUrl(locationName);

    std::string response = httpClient.get(url);

    return parser.parse(response);
}

std::string GeocodingService::buildUrl(const std::string& locationName) const
{
    std::string apiKey = Config::getApiKey();

    if (apiKey.empty())
    {
        throw std::runtime_error("API key is missing");
    }

    return Constants::GEOCODING_BASE_URL + locationName + "&key=" + apiKey;
}
