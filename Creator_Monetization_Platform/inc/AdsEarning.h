#ifndef ADS_EARNING_H
#define ADS_EARNING_H

#include "Creator.h"
#include "IEarningStrategy.h"

class AdsEarning : public IEarningStrategy
{
   public:
    double calculateEarnings(const Creator& creator) const override;
};

#endif
