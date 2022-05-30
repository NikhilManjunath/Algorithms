#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------
TEST(MyVector, Test1) 
{
    CPPLib s;
    std::string input = "{2k++[5--*j]}";
    EXPECT_EQ(s.CheckValidExpression(input), true);
}

TEST(Palindrom, Test2) 
{
    CPPLib cpplib;
    std::string input = "abba";
    EXPECT_EQ(cpplib.IsPalindrome(input), true);
}

TEST(OddChar, Test3) 
{
    CPPLib oddchar;
    std::string input = "abcabcd";
    EXPECT_EQ(oddchar.OddChar(input), 6);
}
