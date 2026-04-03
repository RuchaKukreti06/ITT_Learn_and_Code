#ifndef CREATOR_H
#define CREATOR_H

#include <memory>
#include <string>
#include <vector>

#include "IEarningStrategy.h"
#include "creatorTypes.h"

class Creator
{
   private:
    std::string name;
    std::string earningType;
    int baseAmount;
    int views;
    int subscribers;
    std::vector<std::unique_ptr<IEarningStrategy>> strategies;

   public:
    Creator();
    Creator(std::string name, int views, int subscribers);
    int getViews() const;
    int getSubscribers() const;
    void addStrategy(std::unique_ptr<IEarningStrategy> strategy);
    double calculateTotalEarnings() const;
    void updateDetails(const CreatorRecord& creatorRecord);
};

#endif
