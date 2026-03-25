#ifndef SUMMARIZESTEP_H
#define SUMMARIZESTEP_H

#include "Step.h"

class SummarizeStep : public Step
{
   public:
    std::string execute(const std::string& input, ExecutionContext& context) override;
    bool shouldRun(const ExecutionContext& context) const override;
};

#endif