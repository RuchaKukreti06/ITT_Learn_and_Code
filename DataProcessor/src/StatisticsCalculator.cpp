#include "StatisticsCalculator.h"

Statistics StatisticsCalculator::Calculate(const std::vector<Record>& records)
{
    Statistics statistics;
    statistics.totalRecords = static_cast<int>(records.size());

    for (const auto& record : records) statistics.totalValue += record.value;

    if (!records.empty()) statistics.averageValue = statistics.totalValue / records.size();

    return statistics;
}
