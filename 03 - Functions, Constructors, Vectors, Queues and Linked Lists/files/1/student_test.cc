#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------
TEST(MyVector, Test1) {
MyVector v;
v.push_back(1);
v.push_back(2);
EXPECT_EQ(v.size(), 2);
}

TEST(MyVector, Test2) {
MyVector v;
EXPECT_EQ(v.size(), 0);
}

TEST(MyVector, Test3) {
MyVector v;
v.push_back(1);
v.push_back(2);
v.push_front(12);
v.push_back(8);

EXPECT_EQ(v.pop_back(), 8);
EXPECT_EQ(v.pop_front(), 12);
EXPECT_EQ(v.pop_front(), 1);
EXPECT_EQ(v.pop_front(), 2);
}


TEST(MyVector, Test4) {
MyVector v;
v.push_back(1);
v.push_back(2);
v.insert(3,1);

EXPECT_EQ(v.size(), 3);
EXPECT_EQ(v.pop_back(), 2);
EXPECT_EQ(v.pop_front(), 1);
EXPECT_EQ(v.pop_front(), 3);
}


TEST(MyVector, Test5) 
{
    MyVector v;
    v.push_back(1);
    v.push_front(2);

    EXPECT_EQ(v.pop_back(), 1);
    EXPECT_EQ(v.pop_front(), 2);
}


TEST(MyVector, Test6) {
MyVector v;
v.push_back(1);
v.push_back(2);
v.insert(3,1);
v.push_front(2);

EXPECT_EQ(v.at(0), 2);
EXPECT_EQ(v.at(1), 1);
EXPECT_EQ(v.at(2), 3);
EXPECT_EQ(v.at(3), 2);
}
