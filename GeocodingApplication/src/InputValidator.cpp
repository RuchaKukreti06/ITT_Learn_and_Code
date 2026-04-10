#include "InputValidator.h"

#include <cctype>

bool InputValidator::isValidLocation(const std::string& input)
{
    if (input.empty())
    {
        return false;
    }

    for (char ch : input)
    {
        if (!std::isalnum(ch) && ch != ' ' && ch != ',')
        {
            return false;
        }
    }

    return true;
}
