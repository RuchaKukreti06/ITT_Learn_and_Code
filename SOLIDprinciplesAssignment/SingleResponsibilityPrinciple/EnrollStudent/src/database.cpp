#include "database.h"

std::vector<Student *> Database::students;

Database &Database::getInstance() {
  static Database database;
  return database;
}

void Database::saveStudent(Student *student) { students.push_back(student); }

Student *Database::fetchStudentById(int id) {
  for (Student *student : students) {
    if (student->getId() == id) {
      return student;
    }
  }
  return nullptr;
}
