#include "IStorage.h"
#include "book.h"
#include <fstream>

class FileStorage : public IStorage {
private:
  std::string directory;

public:
  FileStorage(const std::string &dir = "./documents") : directory(dir) {}

  void save(const Book &book) override {
    std::string filename =
        directory + "/" + book.getTitle() + " - " + book.getAuthor() + ".txt";
    std::ofstream file(filename);
    if (file.is_open()) {
      file << "Title: " << book.getTitle() << "\n";
      file << "Author: " << book.getAuthor() << "\n";
      file.close();
    }
  }
};
