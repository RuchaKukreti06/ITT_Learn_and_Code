#include "ReportBuilder.h"

ProcessingReport ReportBuilder::build(DataProcessor& processor,
                                      StatisticsCalculator& statisticsCalculator, int filterValue)
{
    const auto& records = processor.getRecords();
    ProcessingReport report;
    report.statistics = statisticsCalculator.Calculate(records);
    report.filteredCount = processor.FilterByValue(filterValue).size();
    report.processedCount = processor.getProcessedCount();
    report.errorCount = processor.getErrorCount();
    return report;
}
