#ifndef ITRANSFORMER_H
#define ITRANSFORMER_H

#include "Record.h"

class ITransformer
{
   public:
    virtual ~ITransformer() = default;
    virtual void transform(Record& record) = 0;
};

#endif
