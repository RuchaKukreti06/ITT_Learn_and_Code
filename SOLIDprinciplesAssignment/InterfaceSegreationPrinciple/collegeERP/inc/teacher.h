#ifndef TEACHER_H
#define TEACHER_H

#include "user.h"

class Teacher : public User {
public:
  void login() override;
  void viewProfile() override;
  void gradeStudent() override;
};

#endif
