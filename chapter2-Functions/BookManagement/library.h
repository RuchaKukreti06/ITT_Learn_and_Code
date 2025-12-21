#ifndef LIBRARY_H
#define LIBRARY_H

#include "book.h"
#include <iostream>
#include <vector>

class Library {
  std::vector<Book *> books;

public:
  std::string getLocation(Book *book) const {}
};

#endif