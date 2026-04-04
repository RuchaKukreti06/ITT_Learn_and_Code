#include "InputHandler.h"
#include <iostream>

std::pair<int, int> InputHandler::readInputSize() {
  int arraySize, numberOfQueries;
  std::cin >> arraySize >> numberOfQueries;
  return {arraySize, numberOfQueries};
}

std::vector<long long> InputHandler::readArray(int size) {
  std::vector<long long> array(size);
  for (int index = 0; index < size; index++) {
    std::cin >> array[index];
  }
  return array;
}

std::pair<int, int> InputHandler::readQuery() {
  int left, right;
  std::cin >> left >> right;
  return {left, right};
}
