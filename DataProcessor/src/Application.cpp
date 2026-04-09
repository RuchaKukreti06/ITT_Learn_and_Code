#include "Application.h"

#include <memory>

#include "Constants.h"
#include "DataGenerator.h"
#include "DataProcessor.h"
#include "FileLogger.h"
#include "ILogger.h"
#include "ITransformer.h"
#include "IValidator.h"
#include "InputHandler.h"
#include "OutputHandler.h"
#include "ReportBuilder.h"
#include "Transformer.h"
#include "Validator.h"
#include "types.h"

void Application::run()
{
    std::string csvFilePath = InputHandler::inputCsvPath();
    auto validator = std::make_unique<Validator>();
    auto transformer = std::make_unique<Transformer>();
    auto logger = std::make_unique<FileLogger>("processing.log");
    Statistics statistics;
    StatisticsCalculator statisticsCalculator;
    ReportBuilder reportBuilder;

    DataGenerator::GenerateSampleData(csvFilePath, RECORD_COUNT);

    DataProcessor processor(std::move(validator), std::move(transformer), std::move(logger));
    processor.LoadFromCsv(csvFilePath);

    processor.Process();
    std::vector<Record> records = processor.getRecords();
    statistics = statisticsCalculator.Calculate(records);
    OutputHandler::displayStatistics(statistics);

    ProcessingReport report = reportBuilder.build(processor, statisticsCalculator, FILTER_VALUE);
    OutputHandler::printReport(report);
}