#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include <utility>
#include <vector>

class InputHandler {
public:
  static std::pair<int, int> readInputSize();
  static std::vector<long long> readArray(int n);
  static std::pair<int, int> readQuery();
};

#endif
