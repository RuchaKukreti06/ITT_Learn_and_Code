#include "database.hpp"
#include <cstring>
#include <fstream>
#include <sstream>

std::vector<Country> Database::countries;

Database &Database::getInstance() {
  static Database database;
  return database;
}

void Database::loadCountriesFromFile(std::string &path) {
  std::ifstream file(path);
  if (!file.is_open()) {
    throw std::runtime_error("Error: Could not open file: " + path);
  }

  std::string row;
  while (std::getline(file, row)) {
    std::stringstream rowStream(row);
    std::string cell;
    Country country;
    std::string code;

    if (!std::getline(rowStream, cell, ','))
      continue;
    code = cell;
    country.setCountryCode(code);

    while (std::getline(rowStream, cell, ',')) {
      if (!cell.empty()) {
        country.insertAdjacentCountry(cell);
      }
    }
    countries.push_back(country);
  }

  file.close();
}

bool Database::isValidCountry(const std::string &code) {
  bool found = false;
  for (int index = 0; index < countries.size(); index++) {
    if (countries[index].getCountryCode() == code) {
      found = true;
      break;
    }
  }
  return found;
}

Country Database::getCountryByCode(const std::string &code) {
  Country country;
  for (int index = 0; index < countries.size(); index++) {
    if (countries[index].getCountryCode() == code) {
      country = countries[index];
      break;
    }
  }
  return country;
}