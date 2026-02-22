#ifndef DATAPROCESSOR_H
#define DATAPROCESSOR_H
#include <memory>
#include <vector>

#include "IExporter.h"
#include "ILogger.h"
#include "ITransformer.h"
#include "IValidator.h"
#include "Record.h"
#include "StatisticsCalculator.h"

class DataProcessor
{
    std::vector<Record> records;
    size_t recordsProcessed = 0;
    size_t errorCount = 0;

    std::unique_ptr<IValidator> validator;
    std::unique_ptr<ITransformer> transformer;
    std::unique_ptr<ILogger> logger;
    bool validateData = VALIDATE_DATA;
    bool transformData = TRANSFORM_DATA;
    std::string dateFormat = DATE_FORMAT;
    int batchSize = BATCH_SIZE;

   public:
    DataProcessor(std::unique_ptr<IValidator> v, std::unique_ptr<ITransformer> t,
                  std::unique_ptr<ILogger> l);
    std::vector<Record> getRecords();
    const std::vector<Record>& getRecords() const;

    size_t getProcessedCount() const;
    size_t getErrorCount() const;
    size_t countByValue(int value) const;
    std::vector<Record> FilterByValue(int value) const;
    void LoadFromCsv(const std::string& filePath);
    void Process();
    void Export(IExporter& exporter, const std::string& filePath);

    const std::vector<Record>& GetRecords() const;
};

#endif
