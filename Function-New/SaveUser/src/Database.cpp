#include "Database.h"
#include <iostream>

Database::Database() {}

Database &Database::getInstance() {
  static Database instance;
  return instance;
}

void Database::insertUser(const User &user) {
  std::cout << "User inserted into database: " << user.name << std::endl;
}
