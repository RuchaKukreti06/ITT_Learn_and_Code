#ifndef WORKFLOW_H
#define WORKFLOW_H

#include <memory>
#include <string>

#include "ExecutionContext.h"
#include "Step.h"

class Workflow
{
   public:
    void setStartStep(const std::shared_ptr<Step>& step);
    std::string run(const std::string& input);

   private:
    std::shared_ptr<Step> startStep;
};

#endif