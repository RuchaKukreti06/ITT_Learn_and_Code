#include "Transformer.h"

#include <algorithm>

#include "Constants.h"
void Transformer::transform(Record& record)
{
    std::transform(record.name.begin(), record.name.end(), record.name.begin(), ::toupper);
    record.doubledValue = record.value * DOUBLING_FACTOR;
    record.squaredValue = record.value * record.value;
}
