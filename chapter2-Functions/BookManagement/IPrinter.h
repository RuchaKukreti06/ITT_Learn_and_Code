#include <string>

class IPrinter {
public:
  virtual ~IPrinter() = default;
  virtual void printPage(const std::string &page) = 0;
};
