#include "ATMDeviceController.h"

#include "DeviceConstants.h"

void ATMDeviceController::withdraw(const std::string& accountId, double amount)
{
    int handle = getHandle(DeviceConstants::DEVICE_ID);

    validateDevice(handle);

    DeviceRecord record = retrieveDeviceRecord(handle);

    validateDeviceStatus(record);
    validateConnection(record);
    validateFunds(accountId, amount);

    dispenseCash(handle, amount);
}

void ATMDeviceController::validateDevice(int handle) const
{
    if (handle == DeviceHandle::INVALID)
    {
        throw DeviceNotFoundException();
    }
}

void ATMDeviceController::validateDeviceStatus(const DeviceRecord& record) const
{
    if (record.isSuspended())
    {
        throw DeviceLockedException();
    }
}

void ATMDeviceController::validateConnection(const DeviceRecord& record) const
{
    if (!record.isConnected())
    {
        throw NetworkConnectionException();
    }
}

void ATMDeviceController::validateFunds(const std::string& accountId, double amount) const
{
    if (getBalance(accountId) < amount)
    {
        throw InsufficientFundsException();
    }
}

int ATMDeviceController::getHandle(int deviceId)
{
    return deviceId;
}

DeviceRecord ATMDeviceController::retrieveDeviceRecord(int handle)
{
    return DeviceRecord();
}

double ATMDeviceController::getBalance(const std::string& accountId) const
{
    return DeviceConstants::DEMO_BALANCE;
}

void ATMDeviceController::dispenseCash(int handle, double amount)
{
    std::cout << "Dispensing $" << amount << " from device " << handle << std::endl;
}

bool DeviceRecord::isSuspended() const
{
    return false;
}

bool DeviceRecord::isConnected() const
{
    return true;
}