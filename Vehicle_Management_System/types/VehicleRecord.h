#ifndef TYPES_H
#define TYPES_H

#include <string>

struct VehicleRecord
{
    std::string make;
    std::string model;
    int year;
    double price;
    bool isRunning;
};

#endif
