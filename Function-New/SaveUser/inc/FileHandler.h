#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include "User.h"
#include <string>

class FileHandler {
public:
  static std::string generateFilePathForUser(const User &user);
  static void backupUser(const User &user);
};

#endif
