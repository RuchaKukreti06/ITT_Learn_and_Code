#include "SubscriptionEarning.h"

#include "Constants.h"

double SubscriptionEarning::calculateEarnings(const Creator& creator) const
{
    return creator.getSubscribers() * SUBSCRIPTION_EARNING_MULTIPLIER;
}
