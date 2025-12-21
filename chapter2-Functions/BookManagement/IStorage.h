#ifndef I_STORAGE_H
#define I_STORAGE_H

#include "book.h"
#include <fstream>

class IStorage {
public:
  virtual ~IStorage() = default;
  virtual void save(const Book &book) = 0;
};

#endif