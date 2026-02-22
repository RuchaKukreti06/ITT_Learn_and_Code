#ifndef REPORT_BUILDER_H
#define REPORT_BUILDER_H
#include "DataProcessor.h"
#include "types.h"

class ReportBuilder
{
   public:
    ReportBuilder() = default;
    ~ReportBuilder() = default;

    static ProcessingReport build(DataProcessor& processor, StatisticsCalculator& calculator,
                                  int filterValue);
};

#endif