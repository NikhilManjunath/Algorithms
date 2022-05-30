#include "q.h"

#include <iostream>
#include <stack>
#include <vector>
// Implement each function of `q.h` here.
bool CPPLib::CheckValidExpression(const std::string& input) 
{
    std::stack<char> brackets;

    for (int i = 0; i < input.size(); i++)
    {
        if (input.size() == 0)
        {
            return true;
        }

        if (input[i] == '[' || input[i] == '{' || input[i] == '(')
        {
            brackets.push(input[i]);
            continue;
        }

        else if (input[i] == ']')
        {
            if (brackets.top() != '[')
            {
                return false;
                break;
            }
            brackets.pop();
        }

        else if (input[i] == '}')
        {
            if (brackets.top() != '{')
            {
                return false;
                break;
            }
            brackets.pop();
        }

        else if (input[i] == ')')
        {
            if (brackets.top() != '(')
            {
                return false;
                break;
            }
            brackets.pop();
        }
    }

    return (brackets.empty());
}


bool CPPLib::IsPalindrome(const std::string& input) 
{
    int size = input.size();
    for (int i = 0; i < size; i++)
    {
        if (input[i] != input[size-1-i])
        {
            return false;
        }

        if (i > size-i)
        {
            return true;
        }
    }
    return true;
}


int CPPLib::OddChar(const std::string& input) 
{
    char res = 0;
    for (char i:input)
    {
        res = i ^ res;
    }

    return input.find(res);
}
