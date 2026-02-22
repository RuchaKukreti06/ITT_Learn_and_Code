#ifndef IEXPORTER_H
#define IEXPORTER_H

#include <string>
#include <vector>

#include "Record.h"

class IExporter
{
   public:
    virtual ~IExporter() = default;
    virtual void Export(const std::vector<Record>& records, const std::string& filePath) = 0;
};

#endif
