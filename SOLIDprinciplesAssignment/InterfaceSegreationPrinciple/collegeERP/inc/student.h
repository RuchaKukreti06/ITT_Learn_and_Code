#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"

class Student : public User {
public:
  void login() override;
  void viewProfile() override;
  void gradeStudent() override;
};

#endif
