#include "OutputHandler.h"

#include <iostream>

void OutputHandler::displayStatistics(const Statistics& statistics)
{
    std::cout << "\n===== Statistics =====\n";
    std::cout << "Total Records : " << statistics.totalRecords << "\n";
    std::cout << "Total Value   : " << statistics.totalValue << "\n";
    std::cout << "Average Value : " << statistics.averageValue << "\n";
}

void OutputHandler::printReport(const ProcessingReport& report)
{
    std::cout << "\n===== Processing Report =====\n";

    displayStatistics(report.statistics);

    std::cout << "\nFiltered Records : " << report.filteredCount << "\n";
    std::cout << "Records Processed: " << report.processedCount << "\n";
    std::cout << "Errors           : " << report.errorCount << "\n";
}