#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include "ITransformer.h"
#include "Record.h"

class Transformer : public ITransformer
{
   public:
    void transform(Record& record) override;
};

#endif
