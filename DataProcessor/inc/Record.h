#ifndef RECORD_H
#define RECORD_H

#include <string>

#include "Constants.h"

struct Record
{
    std::string id;
    std::string name;
    double value = INITIAL_VALUE;
    std::string date;

    double doubledValue = INITIAL_DOUBLE_VALUE;
    double squaredValue = INITIAL_SQUARED_VALUE;
};

#endif
