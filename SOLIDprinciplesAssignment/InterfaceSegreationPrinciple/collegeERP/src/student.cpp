#include "student.h"
#include <iostream>

void Student::login() { std::cout << "Student logged in\n"; }

void Student::viewProfile() {
  std::cout << "Teacher Name: " << name << ", ID: " << id << std::endl;
}

void Student::gradeStudent() {
  std::cout << "Student cannot grade other students.";
}