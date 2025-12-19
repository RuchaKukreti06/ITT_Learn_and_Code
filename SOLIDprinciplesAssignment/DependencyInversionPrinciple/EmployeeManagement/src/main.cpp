#include "Department.h"
#include "Employee.h"
#include <iostream>

int main() {
  Department department;
  Employee employee;
  int id;
  std::string name;
  std::cout << "Enter id:";
  std::cin >> id;
  std::cout << "Enter name:";
  std::cin >> name;
  employee.setId(id);
  employee.setName(name);

  department.addEmployee(&employee);

  return 0;
}
