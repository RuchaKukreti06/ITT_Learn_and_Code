#include "ExecutionContext.h"

void ExecutionContext::setValue(const std::string& key, const std::string& value)
{
    executionContextMap[key] = value;
}

std::string ExecutionContext::getValue(const std::string& key) const
{
    auto iterator = executionContextMap.find(key);
    if (iterator != executionContextMap.end())
    {
        return iterator->second;
    }
    return "";
}