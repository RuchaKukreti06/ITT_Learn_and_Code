#ifndef BRAND_DEAL_EARNING_H
#define BRAND_DEAL_EARNING_H

#include "Creator.h"
#include "IEarningStrategy.h"

class BrandDealEarning : public IEarningStrategy
{
   private:
    double baseAmount;

   public:
    BrandDealEarning(double amount);
    double calculateEarnings(const Creator&) const override;
};

#endif
