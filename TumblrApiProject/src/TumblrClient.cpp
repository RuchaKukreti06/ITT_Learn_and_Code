#include "TumblrClient.h"
#include "HttpClient.h"
#include "Utils.h"
#include <iostream>
#include <rapidjson/document.h>

TumblrClient::TumblrClient(const std::string &blogName) : blog(blogName) {}

std::string TumblrClient::fetchApi(int start, int count) {
  // Tumblr JSON API endpoint for fetching posts
  std::string url = "https://" + blog +
                    ".tumblr.com/api/read/json?start=" + std::to_string(start) +
                    "&num=" + std::to_string(count);

  return HttpClient::get(url);
}

void TumblrClient::printBlogInfo() {
  std::string response = fetchApi(0, 1);
  std::string json = extractJsonFromResponse(response);

  rapidjson::Document doc;
  doc.Parse(json.c_str());

  auto &blogInfo = doc["tumblelog"];

  std::cout << "title: " << blogInfo["title"].GetString() << "\n";
  std::cout << "name: " << blogInfo["name"].GetString() << "\n";
  std::cout << "description: " << blogInfo["description"].GetString() << "\n";
  std::cout << "no of post: " << doc["posts-total"].GetInt() << "\n\n";
}

std::vector<PostImageResult> TumblrClient::fetchImages(int start, int end) {
  std::string response = fetchApi(start - 1, end - start + 1);
  std::string json = extractJsonFromResponse(response);

  rapidjson::Document doc;
  doc.Parse(json.c_str());

  std::vector<PostImageResult> results;
  int postNumber = start;

  for (auto &post : doc["posts"].GetArray()) {
    if (postNumber > end)
      break;
    // Skip non-photo posts
    if (std::string(post["type"].GetString()) != "photo") {
      postNumber++;
      continue;
    }

    PostImageResult result;
    result.postNumber = postNumber;

    if (post.HasMember("photos")) {
      for (auto &photo : post["photos"].GetArray()) {
        std::string url = getBestImageUrl(photo);
        if (!url.empty())
          result.imageUrls.push_back(url);
      }
    } else {
      std::string url = getBestImageUrl(post);
      if (!url.empty())
        result.imageUrls.push_back(url);
    }

    if (!result.imageUrls.empty()) {
      results.push_back(result);
    }

    postNumber++;
  }

  return results;
}
