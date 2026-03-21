#ifndef SUBSCRIPTION_EARNING_H
#define SUBSCRIPTION_EARNING_H

#include "Creator.h"
#include "IEarningStrategy.h"

class SubscriptionEarning : public IEarningStrategy
{
   public:
    double calculateEarnings(const Creator& creator) const override;
};

#endif
