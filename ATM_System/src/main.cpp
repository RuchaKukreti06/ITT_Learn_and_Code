#include <iostream>

#include "ATMDeviceController.h"

int main()
{
    ATMDeviceController controller;

    try
    {
        controller.withdraw("ACC123", 500);
        std::cout << "Withdrawal successful\n";
    }
    catch (const std::exception& exception)
    {
        std::cout << "Error: " << exception.what() << std::endl;
    }

    return 0;
}