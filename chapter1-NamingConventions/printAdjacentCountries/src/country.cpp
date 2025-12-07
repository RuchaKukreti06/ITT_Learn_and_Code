#include <country.hpp>

std::string Country::getCountryCode() { return code; }

void Country::setCountryCode(std::string code) { this->code = code; }

std::vector<std::string> Country::getAdjacentCountries() {
  return adjacentCountries;
}

void Country::insertAdjacentCountry(std::string country) {
  adjacentCountries.push_back(country);
}