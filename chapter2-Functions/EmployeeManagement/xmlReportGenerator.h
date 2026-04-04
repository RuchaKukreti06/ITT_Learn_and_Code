#ifndef XML_REPORT_GENERATOR_H
#define XML_REPORT_GENERATOR_H

#include "IReportGenerator.h"
#include <iostream>

class xmlReportGenerator : public IReportGenerator {
public:
  void generateReport() override;
};

#endif