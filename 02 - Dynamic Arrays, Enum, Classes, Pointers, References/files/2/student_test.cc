#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------
TEST(IndexOfFirstSpace, test1) {
    CPPLib cpplib;
    std::string input1 = "Nikhil Manjunath";
    std::string input2 = " ";
    std::string input3 = " Electrical";
    EXPECT_EQ(cpplib.IndexOfFirstSpace(input1),6);
    EXPECT_EQ(cpplib.IndexOfFirstSpace(input2),0);
    EXPECT_EQ(cpplib.IndexOfFirstSpace(input3),0);
}
//-----------------------------------------------------------------------------
TEST(SeparateFirstAndLastNames, test1) 
{
    CPPLib seperate;
    std::string fullname = "Nikhil Manjunath";
    std::string firstname;
    std::string lastname;
    seperate.SeparateFirstAndLastNames(fullname,firstname,lastname);
    EXPECT_EQ(firstname,"Nikhil");
    EXPECT_EQ(lastname,"Manjunath");
}
//-----------------------------------------------------------------------------
TEST(NumberOfVowels, test1) {
    CPPLib s;
    std::string input4 = "arsenal";
    std::string input5 = "rhythym";
    std::string input6 = "aeiou";
    EXPECT_EQ(s.NumberOfVowels(input4),3);
    EXPECT_EQ(s.NumberOfVowels(input5),0);
    EXPECT_EQ(s.NumberOfVowels(input6),5);
}
//-----------------------------------------------------------------------------
TEST(NumberOfConsonants, test1) {
    CPPLib cons;
    std::string input7 = "aeiou";
    std::string input8 = "arsenal";
    std::string input9 = "rhythym";
    EXPECT_EQ(cons.NumberOfConsonants(input7),0);
    EXPECT_EQ(cons.NumberOfConsonants(input8),4);
    EXPECT_EQ(cons.NumberOfConsonants(input9),7);
}
//-----------------------------------------------------------------------------
TEST(Reverse, test1) {
    CPPLib rev;
    std::string input10 = "Hello";
    std::string input11 = "";
    EXPECT_EQ(rev.Reverse(input10),1);
    EXPECT_EQ(rev.Reverse(input11),-1);
}
