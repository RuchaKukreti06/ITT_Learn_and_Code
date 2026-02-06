#ifndef PAPERBOY_H
#define PAPERBOY_H

#include "Customer.h"

class Paperboy
{
   public:
    bool collectPayment(Customer& customer, double paymentAmount);
};

#endif
