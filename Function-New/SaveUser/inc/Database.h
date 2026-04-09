#ifndef DATABASE_H
#define DATABASE_H

#include "User.h"

class Database {
private:
  Database();

public:
  static Database &getInstance();
  void insertUser(const User &user);
};

#endif
