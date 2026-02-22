#include "JsonExporter.h"

#include <fstream>

void JsonExporter::Export(const std::vector<Record>& records, const std::string& filePath)
{
    std::ofstream file(filePath);
    file << "[\n";

    for (size_t iterator = 0; iterator < records.size(); ++iterator)
    {
        const auto& record = records[iterator];

        file << "  {\n"
             << "    \"id\": \"" << record.id << "\",\n"
             << "    \"name\": \"" << record.name << "\",\n"
             << "    \"value\": " << record.value << ",\n"
             << "    \"date\": \"" << record.date << "\"\n"
             << "  }";

        if (iterator < records.size() - 1) file << ",";

        file << "\n";
    }

    file << "]";
}
