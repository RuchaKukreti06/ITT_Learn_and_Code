#include "outputHandler.hpp"

void OutputHandler::printAdjacentCountries(
    const std::vector<std::string> &countries) {
  for (const auto &countryName : countries) {
    std::cout << countryName << " ";
  }
}