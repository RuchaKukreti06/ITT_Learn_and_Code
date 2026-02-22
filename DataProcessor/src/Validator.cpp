#include "Validator.h"

bool Validator::Validate(const Record& record, std::string& error)
{
    bool isValidRecord = false;
    if (record.id.empty())
    {
        error = "Missing ID";
    }
    else if (record.name.empty())
    {
        error = "Missing name for ID: " + record.id;
    }
    else
    {
        isValidRecord = true;
    }

    return isValidRecord;
}
