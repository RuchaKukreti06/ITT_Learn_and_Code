#include "Employee.h"

Employee::Employee(int employeeId, const std::string employeeName) {
  id = employeeId;
  name = employeeName;
}

int Employee::getId() { return id; }

std::string Employee::getName() { return name; }

void Employee::setId(int empId) { id = empId; }

std::string Employee::setName(std::string name) {
  this->name = name;
  return name;
}
