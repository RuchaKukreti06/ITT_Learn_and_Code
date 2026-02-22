#ifndef JSONEXPORTER_H
#define JSONEXPORTER_H

#include "IExporter.h"

class JsonExporter : public IExporter
{
   public:
    void Export(const std::vector<Record>& records, const std::string& filePath) override;
};

#endif
