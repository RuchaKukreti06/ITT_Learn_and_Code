#include "BrandDealEarning.h"

BrandDealEarning::BrandDealEarning(double amount) : baseAmount(amount)
{
}

double BrandDealEarning::calculateEarnings(const Creator&) const
{
    return baseAmount;
}
