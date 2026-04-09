#ifndef DATABASE_H
#define DATABASE_H

#include "country.hpp"

class Database {
  Database() {}
  Database(const Database &) = delete;
  Database &operator=(const Database &) = delete;
  static std::vector<Country> countries;

public:
  static Database &getInstance();
  static void loadCountriesFromFile(std::string &path);
  static bool isValidCountry(const std::string &code);
  static Country getCountryByCode(const std::string &code);
};

#endif