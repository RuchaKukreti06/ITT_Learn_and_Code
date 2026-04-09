#include "country.hpp"
#include "database.hpp"
#include "outputHandler.hpp"
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string countryCode;
  Country country;
  Database &database = Database::getInstance();
  char userChoice = 'y';
  std::string filePath = "./data/data.txt";

  try {
    database.loadCountriesFromFile(filePath);
    do {
      std::cout << "Enter the country code to find the adjacent countries: ";
      std::cin >> countryCode;

      while (!database.isValidCountry(countryCode)) {
        std::cout << "Enter a valid country code: ";
        std::cin >> countryCode;
      }

      country = database.getCountryByCode(countryCode);
      std::vector<std::string> adjacentCountries =
          country.getAdjacentCountries();
      std::cout
          << "The adjacent countries to the country having the country code "
          << countryCode << " are:" << std::endl;
      OutputHandler::printAdjacentCountries(adjacentCountries);
      std::cout << "\nDo you want to find adjacent country again? press (y/n):";
      std::cin >> userChoice;
    } while (userChoice == 'y');

  } catch (std::exception &_exception) {
    std::cout << _exception.what() << std::endl;
  }

  return 0;
}