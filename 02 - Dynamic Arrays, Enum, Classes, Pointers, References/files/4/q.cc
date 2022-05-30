#include <string>

#include "q.h"

// A function that capitalize the first letter of a string.
// If it was possible, returns true, otherwise false.
bool CPPLib::CapitalizeFirstLetter(std::string &input) 
{
    if (input.size() == 0) {
        return false;
    }
    else if (std::isdigit(input[0]) == 1)
    {
        return false;
    }
    else {
        input[0] = toupper(input[0]);
        return true;
    }
}
