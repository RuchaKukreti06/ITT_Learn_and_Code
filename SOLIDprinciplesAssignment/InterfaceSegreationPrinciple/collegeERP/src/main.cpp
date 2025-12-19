#include "student.h"
#include "teacher.h"
#include "user.h"
#include <iostream>

int main() {
  int choice = 0;
  std::cout << "Enter type of user {teacher(0)/student(1)}:";
  std::cin >> choice;
  User *user;
  if (choice == 0) {
    user = new Teacher();
  } else {
    user = new Student();
  }

  user->login();
  user->viewProfile();
  user->gradeStudent();

  delete user;

  return 0;
}
