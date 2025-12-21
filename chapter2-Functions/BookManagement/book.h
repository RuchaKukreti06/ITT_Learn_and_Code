#include <iostream>

class Book {
public:
  std::string getTitle() const { return "A Great Book"; }

  std::string getAuthor() const { return "John Doe"; }

  void turnPage() {}

  std::string getCurrentPage() const { return "current page content"; }
};