#ifndef IVALIDATOR_H
#define IVALIDATOR_H

#include <string>

#include "Record.h"

class IValidator
{
   public:
    virtual ~IValidator() = default;
    virtual bool Validate(const Record& record, std::string& error) = 0;
};

#endif
