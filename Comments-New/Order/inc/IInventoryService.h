#pragma once

#include <future>
#include <string>
#include <vector>

class IInventoryService
{
   public:
    virtual ~IInventoryService() = default;

    virtual std::future<bool> checkAvailability(const std::vector<std::string>& items) = 0;

    virtual std::future<void> reserveItems(const std::vector<std::string>& items) = 0;

    virtual std::future<void> commitReservation(const std::vector<std::string>& items) = 0;

    virtual std::future<void> releaseReservation(const std::vector<std::string>& items) = 0;

    virtual std::future<void> restoreInventory(const std::vector<std::string>& items) = 0;
};
