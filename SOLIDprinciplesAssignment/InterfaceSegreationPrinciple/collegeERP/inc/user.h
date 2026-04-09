#ifndef USER_H
#define USER_H

#include <string>

class User {
protected:
  std::string name;
  int id;

public:
  virtual void login() = 0;
  virtual void viewProfile() = 0;
  virtual void gradeStudent() = 0;
};

#endif
