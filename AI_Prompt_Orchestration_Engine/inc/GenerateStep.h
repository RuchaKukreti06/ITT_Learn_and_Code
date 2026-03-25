#ifndef GENERATESTEP_H
#define GENERATESTEP_H

#include "Step.h"

class GenerateStep : public Step
{
   public:
    std::string execute(const std::string& input, ExecutionContext& context) override;
    bool shouldRun(const ExecutionContext& context) const override;
};

#endif