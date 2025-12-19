#include "teacher.h"
#include <iostream>

void Teacher::login() { std::cout << "Teacher logged in\n"; }

void Teacher::viewProfile() {
  std::cout << "Teacher Name: " << name << ", ID: " << id << std::endl;
}

void Teacher::gradeStudent() { std::cout << "Student graded" << std::endl; }