#include "FileLogger.h"

#include <chrono>
#include <ctime>
#include <iomanip>

#include "Constants.h"

FileLogger::FileLogger(const std::string& filePath)
{
    logFile.open(filePath, std::ios::app);
}

FileLogger::~FileLogger()
{
    if (logFile.is_open()) logFile.close();
}

void FileLogger::Log(const std::string& message)
{
    auto now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

    logFile << "[" << std::put_time(std::localtime(&now), DATE_TIME_FORMAT) << "] " << message
            << std::endl;
}
