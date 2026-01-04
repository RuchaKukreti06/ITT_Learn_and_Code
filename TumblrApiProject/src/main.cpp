#include "TumblrClient.h"
#include <iostream>

int main() {
  try {
    std::string blog, range;
    std::cout << "enter the Tumblr blog name: " << std::endl;
    std::getline(std::cin, blog);

    std::cout << "enter the range (e.g. 1-5): " << std::endl;
    std::getline(std::cin, range);

    int start, end;
    sscanf(range.c_str(), "%d-%d", &start, &end);

    TumblrClient client(blog);
    client.printBlogInfo();

    auto images = client.fetchImages(start, end);
    for (const auto &post : images) {
      for (size_t i = 0; i < post.imageUrls.size(); ++i) {
        if (i == 0)
          std::cout << post.postNumber << ". ";
        else
          std::cout << "   ";
        std::cout << post.imageUrls[i] << "\n";
      }
    }
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return 1;
  }
  return 0;
}
