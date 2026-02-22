#ifndef XMLEXPORTER_H
#define XMLEXPORTER_H

#include "IExporter.h"

class XmlExporter : public IExporter
{
   public:
    void Export(const std::vector<Record>& records, const std::string& filePath) override;
};

#endif
