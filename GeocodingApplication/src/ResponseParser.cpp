#include "ResponseParser.h"

#include "json.hpp"

using json = nlohmann::json;

std::vector<Location> ResponseParser::parse(const std::string& jsonResponse) const
{
    std::vector<Location> locations;

    auto data = json::parse(jsonResponse);

    if (data["status"] != "OK")
    {
        return locations;
    }

    for (const auto& item : data["results"])
    {
        Location loc;
        loc.latitude = item["geometry"]["location"]["lat"];
        loc.longitude = item["geometry"]["location"]["lng"];
        loc.formattedAddress = item["formatted_address"];

        locations.push_back(loc);
    }

    return locations;
}
