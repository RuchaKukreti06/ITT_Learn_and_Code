#include "AdsEarning.h"

#include "Constants.h"

double AdsEarning::calculateEarnings(const Creator& creator) const
{
    return creator.getViews() * ADS_EARNING_MULTIPLIER;
}
