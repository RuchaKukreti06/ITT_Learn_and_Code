#include "Step.h"

void Step::setNext(const std::shared_ptr<Step>& nextStep)
{
    next = nextStep;
}

void Step::setFallback(const std::shared_ptr<Step>& fallbackStep)
{
    fallback = fallbackStep;
}

void Step::setRetryCount(int count)
{
    retryCount = count;
}

std::shared_ptr<Step> Step::getNext() const
{
    return next;
}

std::shared_ptr<Step> Step::getFallback() const
{
    return fallback;
}

int Step::getRetryCount() const
{
    return retryCount;
}