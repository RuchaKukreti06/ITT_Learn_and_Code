#include "PrefixSumService.h"

void PrefixSumService::build(const std::vector<long long> &array) {
  int n = array.size();
  prefixSum.assign(n + 1, 0);

  for (int i = 1; i <= n; i++) {
    prefixSum[i] = prefixSum[i - 1] + array[i - 1];
  }
}

const std::vector<long long> &PrefixSumService::getPrefixSum() const {
  return prefixSum;
}
