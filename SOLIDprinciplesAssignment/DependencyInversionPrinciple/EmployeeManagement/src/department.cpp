#include "Department.h"
#include <iostream>

Department::Department(const std::string &departmentName) {
  name = departmentName;
}
void Department::addEmployee(IEmployee *employee) {
  if (employee != nullptr) {
    employees.push_back(employee);
  }
}
