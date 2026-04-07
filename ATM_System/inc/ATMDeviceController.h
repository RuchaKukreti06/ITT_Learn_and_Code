#ifndef ATM_DEVICE_CONTROLLER_H
#define ATM_DEVICE_CONTROLLER_H

#include <stdexcept>
#include <string>

#include "DeviceHandle.h"
#include "DeviceRecord.h"

class DeviceLockedException : public std::runtime_error
{
   public:
    DeviceLockedException() : std::runtime_error("Device is suspended")
    {
    }
};

class InsufficientFundsException : public std::runtime_error
{
   public:
    InsufficientFundsException() : std::runtime_error("Insufficient funds")
    {
    }
};

class NetworkConnectionException : public std::runtime_error
{
   public:
    NetworkConnectionException() : std::runtime_error("Network connection error")
    {
    }
};

class DeviceNotFoundException : public std::runtime_error
{
   public:
    DeviceNotFoundException() : std::runtime_error("Invalid device handle")
    {
    }
};

class ATMDeviceController
{
   public:
    void withdraw(const std::string& accountId, double amount);

   private:
    int getHandle(int deviceId);
    DeviceRecord retrieveDeviceRecord(int handle);
    double getBalance(const std::string& accountId) const;
    void dispenseCash(int handle, double amount);

    void validateDevice(int handle) const;
    void validateDeviceStatus(const DeviceRecord& record) const;
    void validateConnection(const DeviceRecord& record) const;
    void validateFunds(const std::string& accountId, double amount) const;
};

#endif