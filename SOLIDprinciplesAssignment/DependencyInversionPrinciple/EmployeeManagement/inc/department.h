#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "IEmployee.h"
#include <memory>
#include <vector>

class Department {
private:
  std::string name;
  std::vector<IEmployee *> employees;

public:
  Department() {}
  Department(const std::string &departmentName);
  void addEmployee(IEmployee *employee);
};

#endif
