#include "Workflow.h"

#include <exception>

void Workflow::setStartStep(const std::shared_ptr<Step>& step)
{
    startStep = step;
}

std::string Workflow::run(const std::string& input)
{
    ExecutionContext context;
    std::shared_ptr<Step> current = startStep;
    std::string result = input;

    while (current)
    {
        if (!current->shouldRun(context))
        {
            current = current->getNext();
            continue;
        }

        int attempts = 0;
        bool success = false;

        while (attempts <= current->getRetryCount())
        {
            try
            {
                result = current->execute(result, context);
                success = true;
                break;
            }
            catch (...)
            {
                attempts++;
            }
        }

        if (!success && current->getFallback())
        {
            current = current->getFallback();
            continue;
        }

        current = current->getNext();
    }

    return result;
}