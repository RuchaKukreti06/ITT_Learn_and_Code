#include "DataGenerator.h"

#include <fstream>

#include "Constants.h"

void DataGenerator::GenerateSampleData(std::string filePath, int recordCount)
{
    std::ofstream out(filePath);
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int iterator = 1; iterator <= recordCount; ++iterator)
    {
        int value = MIN_VALUE + std::rand() % (MAX_VALUE - MIN_VALUE + 1);
        int daysAgo = std::rand() % DAYS_IN_YEAR;
        std::time_t currentTime = std::time(nullptr) - daysAgo * SECONDS_IN_HOUR * HOURS_IN_DAY;
        char dateString[11];
        std::strftime(dateString, sizeof(dateString), DATE_FORMAT, std::localtime(&currentTime));

        out << "ID" << iterator << ",Item" << iterator << "," << value << "," << dateString << "\n";
    }
}