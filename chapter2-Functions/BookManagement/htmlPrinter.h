#include "IPrinter.h"
#include <iostream>

class HtmlPrinter : public IPrinter {
public:
  void printPage(const std::string &page) override {
    std::cout << "<div style='single-page'>" << page << "</div>" << std::endl;
  }
};
