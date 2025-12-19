#ifndef STUDENT_H
#define STUDENT_H

#include "constants.h"
#include <iostream>
#include <string>
#include <vector>

class Student {
  StudentRecord studentRecord;

public:
  int getId();
  std::string getName();
  int getRollNumber();
  void setStudent(const StudentRecord &studentRecord);
  void setId(int id);
  void setName(std::string name);
  void setRollNumber(int rollNumber);
};

#endif