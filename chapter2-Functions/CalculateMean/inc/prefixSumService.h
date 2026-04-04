#ifndef PREFIX_SUM_SERVICE_H
#define PREFIX_SUM_SERVICE_H

#include <vector>

class PrefixSumService {
private:
  std::vector<long long> prefixSum;

public:
  void build(const std::vector<long long> &array);
  const std::vector<long long> &getPrefixSum() const;
};

#endif
