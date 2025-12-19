#include "student.h"

int Student::getId() { return studentRecord.id; }

std::string Student::getName() { return studentRecord.name; }

int Student::getRollNumber() { return studentRecord.rollNumber; }

void Student::setStudent(const StudentRecord &studentRecord) {
  this->studentRecord.id = studentRecord.id;
  this->studentRecord.name = studentRecord.name;
  this->studentRecord.rollNumber = studentRecord.rollNumber;
}

void Student::setId(int id) { this->studentRecord.id = id; }

void Student::setName(std::string name) { this->studentRecord.name = name; }

void Student::setRollNumber(int rollNumber) {
  this->studentRecord.rollNumber = rollNumber;
}