#include "q.h"

// Given two integers, returns the result of the operation based on the given
// operator.
float CPPLib::Calculate(int a, int b, Operation operation) 
{
    if (operation == Operation::add) {
        return a+b;
    }
    else if (operation == Operation::subtract) {
        return a-b;
    }
    else if (operation == Operation::division) {
        return a/b;
    }
    else if (operation == Operation::multiplication) {
        return a*b;
    }
    else if (operation == Operation::bitwise_AND) {
        return a&b;
    }
    else if (operation == Operation::bitwise_OR) {
        return a|b;
    }
    else if (operation == Operation::bitwise_XOR) {
        return a^b;
    }
    else if (operation == Operation::shift_right) {
        return a>>b;
    }
    else if (operation == Operation::shift_left) {
        return a<<b;
    }
}
