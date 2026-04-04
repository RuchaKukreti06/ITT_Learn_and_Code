#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

class Employee {
  int id;
  std::string name;
  std::string department;
  bool isworking;

public:
  bool isWorking();
};

#endif