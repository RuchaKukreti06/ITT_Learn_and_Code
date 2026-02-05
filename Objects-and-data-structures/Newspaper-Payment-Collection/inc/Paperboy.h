#ifndef PAPERBOY_H
#define PAPERBOY_H

class Customer;

class Paperboy {
public:
  bool collectPayment(Customer &customer, double paymentAmount);
};

#endif
