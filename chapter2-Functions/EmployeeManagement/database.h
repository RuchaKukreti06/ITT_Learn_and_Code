#ifndef DATABASE_H
#define DATABASE_H

#include "employee.h"
#include <iostream>
#include <vector>

class Database {
  std::vector<Employee *> employees;

public:
  void save();
};

#endif