#include "InputHandler.h"

#include <iostream>

#include "creatorTypes.h"
void InputHandler::inputCreatorDetails(Creator& creator)
{
    std::string name;
    int views;
    int subscribers;
    double baseEarning;
    CreatorRecord creatorRecord;

    std::cout << "Enter Creator Name: ";
    std::cin >> creatorRecord.name;

    std::cout << "Enter number of views: ";
    std::cin >> creatorRecord.views;

    std::cout << "Enter number of subscribers: ";
    std::cin >> creatorRecord.subscribers;

    creator.setCreatorDetails(creatorRecord);
}
