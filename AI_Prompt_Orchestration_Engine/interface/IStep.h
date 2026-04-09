#ifndef ISTEP_H
#define ISTEP_H

#include <string>

class ExecutionContext;

class IStep
{
   public:
    virtual ~IStep()
    {
    }
    virtual std::string execute(const std::string& input, ExecutionContext& context) = 0;
    virtual bool shouldRun(const ExecutionContext& context) const = 0;
};

#endif