#include "InputHandler.h"
#include "OutputHandler.h"
#include "PrefixSumService.h"
#include "RangeCalculator.h"
#include <iostream>

int main() {
  std::vector<long long> result;
  std::pair<int, int> sizeQueriespair = InputHandler::readInputSize();
  int size = sizeQueriespair.first;
  int numberOfQueries = sizeQueriespair.second;
  std::vector<long long> array = InputHandler::readArray(size);

  PrefixSumService prefixService;
  prefixService.build(array);

  RangeCalculator calculator(prefixService.getPrefixSum());

  for (int index = 0; index < numberOfQueries; index++) {
    std::pair<int, int> leftRightPair = InputHandler::readQuery();
    int left = leftRightPair.first;
    int right = leftRightPair.second;
    result.push_back(calculator.getFloorMean(left, right));
  }

  OutputHandler::printResult(result);

  return 0;
}
