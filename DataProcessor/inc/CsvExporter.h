#ifndef CSVEXPORTER_H
#define CSVEXPORTER_H

#include "IExporter.h"

class CsvExporter : public IExporter
{
   public:
    void Export(const std::vector<Record>& records, const std::string& filePath) override;
};

#endif
