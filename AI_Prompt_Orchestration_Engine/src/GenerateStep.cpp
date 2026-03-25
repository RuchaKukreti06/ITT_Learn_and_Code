#include "GenerateStep.h"

std::string GenerateStep::execute(const std::string& input, ExecutionContext& context)
{
    return "Generated: " + input;
}

bool GenerateStep::shouldRun(const ExecutionContext& context) const
{
    return true;
}