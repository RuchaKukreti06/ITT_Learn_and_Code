#include "OutputHandler.h"
#include <iostream>

void OutputHandler::printResult(const std::vector<long long> &result) {
  for (int index = 0; index < result.size(); index++) {
    std::cout << result[index] << std::endl;
  }
}
