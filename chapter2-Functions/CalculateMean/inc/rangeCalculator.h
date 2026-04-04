#ifndef RANGE_CALCULATOR_H
#define RANGE_CALCULATOR_H

#include <vector>

class RangeCalculator {
private:
  const std::vector<long long> &prefixSum;

public:
  explicit RangeCalculator(const std::vector<long long> &prefixSum);
  long long getRangeSum(int left, int right) const;
  long long getFloorMean(int left, int right) const;
};

#endif
