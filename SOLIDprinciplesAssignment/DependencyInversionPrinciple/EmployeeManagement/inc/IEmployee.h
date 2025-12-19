#ifndef IEMPLOYEE_H
#define IEMPLOYEE_H

#include <string>

class IEmployee {
public:
  virtual ~IEmployee() = default;
  virtual int getId() = 0;
  virtual std::string getName() = 0;
  virtual void setId(int id) = 0;
  virtual std::string setName(std::string name) = 0;
};

#endif
