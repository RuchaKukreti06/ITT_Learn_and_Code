#include "XmlExporter.h"

#include <fstream>

void XmlExporter::Export(const std::vector<Record>& records, const std::string& filePath)
{
    std::ofstream file(filePath);

    file << "<?xml version=\"1.0\"?>\n";
    file << "<records>\n";

    for (const auto& record : records)
    {
        file << "  <record>\n"
             << "    <id>" << record.id << "</id>\n"
             << "    <name>" << record.name << "</name>\n"
             << "    <value>" << record.value << "</value>\n"
             << "    <date>" << record.date << "</date>\n"
             << "  </record>\n";
    }

    file << "</records>";
}
