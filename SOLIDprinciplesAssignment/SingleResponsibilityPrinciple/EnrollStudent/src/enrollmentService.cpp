#include "enrollmentService.h"

EnrollmentService &EnrollmentService::getInstance() {
  static EnrollmentService instance;
  return instance;
}

void EnrollmentService::enrollStudent(Student *student) {
  Database::getInstance().saveStudent(student);
}
