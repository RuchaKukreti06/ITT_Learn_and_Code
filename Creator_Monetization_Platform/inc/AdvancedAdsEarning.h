#ifndef ADVANCED_ADS_EARNING_H
#define ADVANCED_ADS_EARNING_H

#include <string>

#include "Creator.h"
#include "IEarningStrategy.h"

class AdvancedAdsEarning : public IEarningStrategy
{
   private:
    double engagementRate;
    std::string region;
    std::string season;

   public:
    AdvancedAdsEarning(double engagementRate, std::string region, std::string season);
    double calculateEarnings(const Creator& creator) const override;
};

#endif
