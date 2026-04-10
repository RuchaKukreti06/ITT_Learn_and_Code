#ifndef RESPONSE_PARSER_H
#define RESPONSE_PARSER_H

#include <string>
#include <vector>

#include "Location.h"

class ResponseParser
{
   public:
    std::vector<Location> parse(const std::string& jsonResponse) const;
};

#endif
