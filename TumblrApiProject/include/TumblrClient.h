#ifndef TUMBLR_CLIENT_H
#define TUMBLR_CLIENT_H

#include "TumblrModels.h"
#include <string>
#include <vector>


class TumblrClient {
public:
  explicit TumblrClient(const std::string &blogName);

  void printBlogInfo();
  std::vector<PostImageResult> fetchImages(int start, int end);

private:
  std::string blog;

  std::string fetchApi(int start, int count);
};

#endif
