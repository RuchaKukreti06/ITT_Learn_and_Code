#include "AdvancedAdsEarning.h"

#include "Constants.h"

AdvancedAdsEarning::AdvancedAdsEarning(double engagementRate, std::string region,
                                       std::string season)
    : engagementRate(engagementRate), region(region), season(season)
{
}

double AdvancedAdsEarning::calculateEarnings(const Creator& creator) const
{
    double baseRate = ADVANCED_ADS_EARNING_BASE_RATE;

    if (region == "US") baseRate *= US_REGION_MULTIPLIER;
    if (season == "FESTIVE") baseRate *= FESTIVE_SEASON_MULTIPLIER;

    return creator.getViews() * baseRate * engagementRate;
}
