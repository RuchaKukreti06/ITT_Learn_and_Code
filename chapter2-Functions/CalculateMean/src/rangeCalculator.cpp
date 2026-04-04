#include "RangeCalculator.h"

RangeCalculator::RangeCalculator(const std::vector<long long> &prefixSum)
    : prefixSum(prefixSum) {}

long long RangeCalculator::getRangeSum(int left, int right) const {
  return prefixSum[right] - prefixSum[left - 1];
}

long long RangeCalculator::getFloorMean(int left, int right) const {
  long long sum = getRangeSum(left, right);
  int length = right - left + 1;
  return sum / length;
}
