#include <iostream>
using namespace std;

const double DISCOUNT = 0.10;
const double TAX_RATE = 0.18;

void placeOrder(int orderId, double orderAmount)
{
    if (isOrderInvalid(orderId))
    {
        showInvalidOrderMessage();
        return;
    }

    double finalAmount = calculateFinalAmount(orderAmount);
    saveOrder(orderId, finalAmount);

    showOrderSuccessMessage();
}

double calculateFinalAmount(double orderAmount)
{
    double discount = calculateDiscount(orderAmount);
    double tax = calculateTax(orderAmount);
    return (orderAmount + tax) - discount;
}

double calculateDiscount(double amount)
{
    return amount * DISCOUNT;
}

double calculateTax(double amount)
{
    return amount * TAX_RATE;
}

bool isOrderInvalid(int orderId)
{
    return orderId <= 0;
}

void showInvalidOrderMessage()
{
    cout << "Order cannot be empty" << endl;
}

void showOrderSuccessMessage()
{
    cout << "Order placed successfully" << endl;
}

void saveOrder(int orderId, double amount)
{
    cout << "Order saved in database" << endl;
}