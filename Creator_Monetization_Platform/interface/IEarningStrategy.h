#ifndef IEARNINGSTRATEGY_H
#define IEARNINGSTRATEGY_H

class Creator;

class IEarningStrategy
{
   public:
    virtual double calculateEarnings(const Creator& creator) const = 0;
    virtual ~IEarningStrategy() {};
};

#endif
