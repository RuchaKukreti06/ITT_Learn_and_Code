#ifndef BASICVALIDATOR_H
#define BASICVALIDATOR_H

#include "IValidator.h"

class Validator : public IValidator
{
   public:
    bool Validate(const Record& record, std::string& error) override;
};

#endif
