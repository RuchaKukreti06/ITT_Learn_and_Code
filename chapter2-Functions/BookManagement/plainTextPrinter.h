#include "IPrinter.h"
#include <iostream>

class PlainTextPrinter : public IPrinter {
public:
  void printPage(const std::string &page) override {
    std::cout << page << std::endl;
  }
};