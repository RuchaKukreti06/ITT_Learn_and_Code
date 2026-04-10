#include "HttpClient.h"

#include <array>
#include <cstdio>
#include <memory>
#include <stdexcept>

#include "json.hpp"

std::string HttpClient::get(const std::string& url) const
{
    std::string command = "curl -s \"" + url + "\"";

    std::array<char, 128> buffer{};
    std::string result;

    FILE* pipe = popen(command.c_str(), "r");
    if (!pipe)
    {
        throw std::runtime_error("Failed to execute curl command");
    }

    while (fgets(buffer.data(), buffer.size(), pipe) != nullptr)
    {
        result += buffer.data();
    }

    pclose(pipe);

    return result;
}
