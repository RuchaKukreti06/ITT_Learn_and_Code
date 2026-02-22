#ifndef STATISTICSCALCULATOR_H
#define STATISTICSCALCULATOR_H

#include <vector>

#include "Record.h"
#include "types.h"

class StatisticsCalculator
{
   public:
    Statistics Calculate(const std::vector<Record>& records);
};

#endif
