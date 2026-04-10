#include <iostream>

#include "GeocodingService.h"
#include "HttpClient.h"
#include "InputValidator.h"
#include "ResponseParser.h"

int main()
{
    std::string locationName;

    std::cout << "Enter location: ";
    std::getline(std::cin, locationName);

    if (!InputValidator::isValidLocation(locationName))
    {
        std::cout << "Invalid input." << std::endl;
        return 1;
    }

    HttpClient httpClient;
    ResponseParser parser;
    GeocodingService service(httpClient, parser);

    try
    {
        auto results = service.getCoordinates(locationName);

        if (results.empty())
        {
            std::cout << "No results found." << std::endl;
            return 0;
        }

        for (const auto& loc : results)
        {
            std::cout << "Address: " << loc.formattedAddress << std::endl;
            std::cout << "Latitude: " << loc.latitude << std::endl;
            std::cout << "Longitude: " << loc.longitude << std::endl;
            std::cout << "-----------------------------" << std::endl;
        }
    }
    catch (const std::exception& ex)
    {
        std::cout << "Error: " << ex.what() << std::endl;
    }

    return 0;
}
