#ifndef STEP_H
#define STEP_H

#include <memory>

#include "IStep.h"

class Step : public IStep
{
   public:
    void setNext(const std::shared_ptr<Step>& nextStep);
    void setFallback(const std::shared_ptr<Step>& fallbackStep);
    void setRetryCount(int count);

    std::shared_ptr<Step> getNext() const;
    std::shared_ptr<Step> getFallback() const;
    int getRetryCount() const;

   protected:
    std::shared_ptr<Step> next;
    std::shared_ptr<Step> fallback;
    int retryCount = 0;
};

#endif