#ifndef CSV_REPORT_GENERATOR_H
#define CSV_REPORT_GENERATOR_H

#include "IReportGenerator.h"
#include <iostream>

class csvReportGenerator : public IReportGenerator {
public:
  void generateReport() override;
};

#endif