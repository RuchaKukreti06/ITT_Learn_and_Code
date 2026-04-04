#ifndef I_REPORT_GENERATOR_H
#define I_REPORT_GENERATOR_H

#include <iostream>

class IReportGenerator {
public:
  virtual void generateReport() = 0;
};

#endif