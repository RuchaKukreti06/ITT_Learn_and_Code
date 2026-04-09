#include "FileHandler.h"
#include <fstream>

std::string generateFilePathForUser(const User &user) {
  std::string filePath = "/backup/users/" + std::to_string(user.id) + ".txt";
  return filePath;
}

void FileHandler::backupUser(const User &user) {
  std::string filePath = generateFilePathForUser(user);
  std::ofstream file(filePath);

  if (file.is_open()) {
    file << "ID: " << user.id << "\n";
    file << "Name: " << user.name << "\n";
    file << "Email: " << user.email << "\n";
    file.close();
  }
}
