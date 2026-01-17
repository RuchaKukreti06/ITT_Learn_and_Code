#include "UserValidator.h"

bool UserValidator::isValid(const User &user) {
  return !user.name.empty() && !user.email.empty();
}
