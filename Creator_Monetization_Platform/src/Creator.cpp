#include "Creator.h"

Creator::Creator()
{
}

Creator::Creator(std::string name, int views, int subscribers)
    : name(name), views(views), subscribers(subscribers)
{
}

int Creator::getViews() const
{
    return views;
}
int Creator::getSubscribers() const
{
    return subscribers;
}

void Creator::addStrategy(std::unique_ptr<IEarningStrategy> strategy)
{
    strategies.push_back(std::move(strategy));
}

double Creator::calculateTotalEarnings() const
{
    double total = 0;
    for (const auto& strategy : strategies)
    {
        total += strategy->calculateEarnings(*this);
    }
    return total;
}

void Creator::setCreatorDetails(const CreatorRecord& creatorRecord)
{
    name = creatorRecord.name;
    subscribers = creatorRecord.subscribers;
    views = creatorRecord.views;
}
