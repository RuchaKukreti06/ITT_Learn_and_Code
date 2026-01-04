#include "HttpClient.h"
#include <curl/curl.h>
#include <stdexcept>

static size_t WriteCallback(void *contents, size_t size, size_t nmemb,
                            std::string *output) {
  size_t total = size * nmemb;
  output->append((char *)contents, total);
  return total;
}

std::string HttpClient::get(const std::string &url) {
  CURL *curl = curl_easy_init();
  std::string response;

  if (!curl) {
    throw std::runtime_error("Curl init failed");
  }

  curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
  curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
  curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

  CURLcode res = curl_easy_perform(curl);
  curl_easy_cleanup(curl);

  if (res != CURLE_OK) {
    throw std::runtime_error("HTTP request failed");
  }

  return response;
}
