#include "InputHandler.h"

#include <iostream>

std::string InputHandler::inputCsvPath()
{
    std::string csvPath;
    std::cout << "Enter input csv file path: ";
    std::cin >> csvPath;
    return csvPath;
}