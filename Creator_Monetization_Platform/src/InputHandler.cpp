#include "InputHandler.h"

#include <iostream>

#include "creatorTypes.h"
void InputHandler::inputCreatorDetails(Creator& creator)
{
    CreatorRecord creatorRecord;

    std::cout << "Enter Creator Name: ";
    std::cin >> creatorRecord.name;

    std::cout << "Enter earning type: ";
    std::cin >> creatorRecord.earningType;

    std::cout << "Enter base amount: ";
    std::cin >> creatorRecord.baseAmount;

    std::cout << "Enter number of views: ";
    std::cin >> creatorRecord.views;

    std::cout << "Enter number of subscribers: ";
    std::cin >> creatorRecord.subscribers;

    creator.updateDetails(creatorRecord);
}
