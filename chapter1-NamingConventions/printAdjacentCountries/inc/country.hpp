#ifndef COUNTRY_H
#define COUNTRY_H

#include <iostream>
#include <string>
#include <vector>

class Country {
  std::string code;
  std::vector<std::string> adjacentCountries;

public:
  std::string getCountryCode();
  void setCountryCode(std::string code);
  std::vector<std::string> getAdjacentCountries();
  void insertAdjacentCountry(std::string country);
};

#endif