#include "inputHandler.h"

StudentRecord InputHandler ::readStudentInput() {
  StudentRecord studentRecord;
  std::cout << "Enter id:";
  std::cin >> studentRecord.id;
  std::cout << "Enter name:";
  std::cin >> studentRecord.name;
  std::cout << "Enter roll number:";
  std::cin >> studentRecord.rollNumber;
  return studentRecord;
}
