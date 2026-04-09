#include "TranslateStep.h"

std::string TranslateStep::execute(const std::string& input, ExecutionContext& context)
{
    return "Translated: " + input;
}

bool TranslateStep::shouldRun(const ExecutionContext& context) const
{
    return true;
}