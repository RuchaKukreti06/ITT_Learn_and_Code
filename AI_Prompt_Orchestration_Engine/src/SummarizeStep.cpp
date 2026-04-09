#include "SummarizeStep.h"

std::string SummarizeStep::execute(const std::string& input, ExecutionContext& context)
{
    return "Summary of: " + input;
}

bool SummarizeStep::shouldRun(const ExecutionContext& context) const
{
    return true;
}