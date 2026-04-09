#ifndef UTILS_H
#define UTILS_H

#include <rapidjson/document.h>
#include <string>


std::string extractJsonFromResponse(const std::string &response);
std::string getBestImageUrl(const rapidjson::Value &photo);

#endif
