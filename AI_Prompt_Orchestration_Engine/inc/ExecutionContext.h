#ifndef EXECUTION_CONTEXT_H
#define EXECUTION_CONTEXT_H

#include <map>
#include <string>

class ExecutionContext
{
   public:
    void setValue(const std::string& key, const std::string& value);
    std::string getValue(const std::string& key) const;

   private:
    std::map<std::string, std::string> executionContextMap;
};

#endif