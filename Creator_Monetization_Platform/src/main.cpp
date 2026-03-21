#include <iostream>

#include "AdsEarning.h"
#include "BrandDealEarning.h"
#include "Creator.h"
#include "IEarningStrategy.h"
#include "InputHandler.h"
#include "SubscriptionEarning.h"

int main()
{
    Creator creator;
    InputHandler::inputCreatorDetails(creator);
    creator.addStrategy(std::make_unique<AdsEarning>());
    creator.addStrategy(std::make_unique<SubscriptionEarning>());
    creator.addStrategy(std::make_unique<BrandDealEarning>(1000));

    double earnings = creator.calculateTotalEarnings();

    std::cout << "Total Earnings: " << earnings << std::endl;

    return 0;
}
