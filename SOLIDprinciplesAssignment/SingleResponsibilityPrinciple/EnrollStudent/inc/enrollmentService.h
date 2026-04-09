#ifndef ENROLLMENT_SERVICE_H
#define ENROLLMENT_SERVICE_H

#include "database.h"
#include "student.h"

class EnrollmentService {
private:
  EnrollmentService() {}
  EnrollmentService(const EnrollmentService &) = delete;
  EnrollmentService &operator=(const EnrollmentService &) = delete;

public:
  static EnrollmentService &getInstance();
  void enrollStudent(Student *student);
};

#endif
