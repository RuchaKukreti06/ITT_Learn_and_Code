#include "CsvExporter.h"

#include <fstream>

void CsvExporter::Export(const std::vector<Record>& records, const std::string& filePath)
{
    std::ofstream file(filePath);

    file << CSV_HEADER;

    for (const auto& record : records)
    {
        file << record.id << "," << record.name << "," << record.value << "," << record.date << ","
             << record.doubledValue << "," << record.squaredValue << "\n";
    }
}
