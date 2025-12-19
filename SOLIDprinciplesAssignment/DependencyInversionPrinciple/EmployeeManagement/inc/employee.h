#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "IEmployee.h"
#include <string>

class Employee : public IEmployee {
private:
  int id;
  std::string name;

public:
  Employee() {}
  Employee(int id, const std::string name);
  int getId() override;
  std::string getName() override;
  void setId(int id) override;
  std::string setName(std::string name) override;
};

#endif
