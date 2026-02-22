#ifndef FILELOGGER_H
#define FILELOGGER_H

#include <fstream>

#include "ILogger.h"

class FileLogger : public ILogger
{
   private:
    std::ofstream logFile;

   public:
    FileLogger(const std::string& filePath);
    ~FileLogger();
    void Log(const std::string& message) override;
};

#endif
