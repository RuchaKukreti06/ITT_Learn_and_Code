#include "database.h"
#include "enrollmentService.h"
#include "inputHandler.h"
#include "student.h"
#include <iostream>

int main() {
  Student student;

  StudentRecord record = InputHandler::readStudentInput();
  student.setStudent(record);

  EnrollmentService::getInstance().enrollStudent(&student);

  Student *fetchedStudent =
      Database::getInstance().fetchStudentById(student.getId());

  std::cout << fetchedStudent->getName() << " - "
            << fetchedStudent->getRollNumber() << std::endl;

  return 0;
}
