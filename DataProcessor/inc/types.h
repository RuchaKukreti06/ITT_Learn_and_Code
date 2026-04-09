#ifndef TYPES_H
#define TYPES_H
#include <string>

struct Statistics
{
    int totalRecords = 0;
    double totalValue = 0.0;
    double averageValue = 0.0;
};

struct ProcessingReport
{
    Statistics statistics;
    size_t filteredCount;
    size_t processedCount;
    size_t errorCount;
};

#endif