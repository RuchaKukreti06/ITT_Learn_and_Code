#include "DataProcessor.h"

#include <fstream>
#include <sstream>

DataProcessor::DataProcessor(std::unique_ptr<IValidator> validator,
                             std::unique_ptr<ITransformer> transformer,
                             std::unique_ptr<ILogger> logger)
    : validator(std::move(validator)),
      transformer(std::move(transformer)),
      logger(std::move(logger))
{
}

std::vector<Record> DataProcessor::getRecords()
{
    return records;
}

size_t DataProcessor::getProcessedCount() const
{
    return recordsProcessed;
}

size_t DataProcessor::getErrorCount() const
{
    return errorCount;
}

std::vector<Record> DataProcessor::FilterByValue(int value) const
{
    std::vector<Record> filtered;

    for (const auto& record : records)
    {
        if (record.value == value)
        {
            filtered.push_back(record);
        }
    }

    return filtered;
}

size_t DataProcessor::countByValue(int value) const
{
    size_t count = 0;

    for (const auto& record : records)
    {
        if (record.value == value)
        {
            ++count;
        }
    }

    return count;
}

void DataProcessor::LoadFromCsv(const std::string& filePath)
{
    std::ifstream file(filePath);
    std::string row;

    while (std::getline(file, row))
    {
        std::stringstream stringstream(row);
        std::string id, name, value, date;

        std::getline(stringstream, id, ',');
        std::getline(stringstream, name, ',');
        std::getline(stringstream, value, ',');
        std::getline(stringstream, date, ',');

        Record record;
        record.id = id;
        record.name = name;
        record.value = std::stod(value);
        record.date = date;

        records.push_back(record);
    }

    logger->Log("Loaded records from CSV");
}

void DataProcessor::Process()
{
    std::vector<Record> validRecords;

    for (auto& record : records)
    {
        std::string error;

        if (validator && !validator->Validate(record, error))
        {
            logger->Log("Validation failed: " + error);
            continue;
        }

        if (transformer) transformer->transform(record);

        validRecords.push_back(record);
    }

    records = validRecords;

    logger->Log("Processing complete");
}

void DataProcessor::Export(IExporter& exporter, const std::string& filePath)
{
    exporter.Export(records, filePath);
    logger->Log("Export complete: " + filePath);
}

const std::vector<Record>& DataProcessor::GetRecords() const
{
    return records;
}
