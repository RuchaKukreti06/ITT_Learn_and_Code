#ifndef DATA_GENERATOR_H
#define DATA_GENERATOR_H
#include <cstdlib>
#include <ctime>
#include <string>

class DataGenerator
{
   public:
    static void GenerateSampleData(std::string filePath, int recordCount);
};

#endif