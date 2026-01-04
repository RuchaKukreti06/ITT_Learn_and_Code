#include "Utils.h"
#include <regex>
#include <stdexcept>

std::string extractJsonFromResponse(const std::string &response) {
  // Locate and isolate the JSON payload embedded in Tumblr's JS response
  std::regex rgx(R"(var\s+tumblr_api_read\s*=\s*({[\s\S]*});?)");
  std::smatch match;

  if (!std::regex_search(response, match, rgx)) {
    throw std::runtime_error("Invalid Tumblr API response");
  }
  return match[1];
}

std::string getBestImageUrl(const rapidjson::Value &photo) {
  const char *keys[] = {"photo-url-1280", "photo-url-500", "photo-url-400",
                        "photo-url-250", "photo-url-100"};

  for (const auto &key : keys) {
    if (photo.HasMember(key)) {
      return photo[key].GetString();
    }
  }
  // No usable image found
  return "";
}
