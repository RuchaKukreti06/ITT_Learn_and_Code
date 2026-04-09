#include "UserService.h"
#include "Database.h"
#include "FileHandler.h"
#include "UserValidator.h"
#include <iostream>


void UserService::saveUser(const User &user) {
  if (!UserValidator::isValid(user)) {
    std::cout << "Invalid user data" << std::endl;
    return;
  }

  Database::getInstance().insertUser(user);
  FileHandler::backupUser(user);
}
