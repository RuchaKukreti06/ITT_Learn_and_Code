#include "Config.h"

#include <cstdlib>

std::string Config::getApiKey()
{
    const char* key = std::getenv("GOOGLE_API_KEY");

    if (key == nullptr)
    {
        return "";
    }

    return std::string(key);
}
