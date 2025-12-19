#ifndef DATABASE_H
#define DATABASE_H

#include "student.h"
#include <vector>

class Database {
private:
  Database() {}
  Database(const Database &) = delete;
  Database &operator=(const Database &) = delete;

  static std::vector<Student *> students;

public:
  static Database &getInstance();
  void saveStudent(Student *student);
  Student *fetchStudentById(int id);
};

#endif
