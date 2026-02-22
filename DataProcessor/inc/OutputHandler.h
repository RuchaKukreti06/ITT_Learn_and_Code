#ifndef OUTPUT_HANDLER_H
#define OUTPUT_HANDLER_H

#include "types.h"

class OutputHandler
{
   public:
    static void displayStatistics(const Statistics& statistics);
    static void printReport(const ProcessingReport& report);
};

#endif