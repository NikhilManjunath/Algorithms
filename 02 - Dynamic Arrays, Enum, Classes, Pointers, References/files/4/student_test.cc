
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
//-----------------------------------------------------------------------------
TEST(CapitalizeFirstLetter, test1) 
{
    CPPLib capital;
    std::string input1 = "2llo";
    EXPECT_EQ(capital.CapitalizeFirstLetter(input1),false);
}
//-----------------------------------------------------------------------------

TEST(CapitalizeFirstLetter, test2) 
{
    CPPLib capital1;
    std::string input2 = "hello";
    EXPECT_EQ(capital1.CapitalizeFirstLetter(input2),true);

    std::string input3 = "Hello";
    EXPECT_EQ(capital1.CapitalizeFirstLetter(input3),true);

    std::string input4 = "";
    EXPECT_EQ(capital1.CapitalizeFirstLetter(input4),false);
}
//-----------------------------------------------------------------------------
