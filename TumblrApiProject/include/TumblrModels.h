#ifndef TUMBLR_MODELS_H
#define TUMBLR_MODELS_H

#include <string>
#include <vector>

struct PostImageResult {
  int postNumber;
  std::vector<std::string> imageUrls;
};

struct PostRange {
  int start;
  int end;
};

#endif
