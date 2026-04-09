#ifndef USER_VALIDATOR_H
#define USER_VALIDATOR_H

#include "User.h"

class UserValidator {
public:
  static bool isValid(const User &user);
};

#endif
