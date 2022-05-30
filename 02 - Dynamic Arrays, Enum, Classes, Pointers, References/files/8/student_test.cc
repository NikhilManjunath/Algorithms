#include <iostream>
#include <vector>

#include "gtest/gtest.h"
#include "q.h"

// Write several test cases for each function.
//-----------------------------------------------------------------------------
TEST(UniqueVectorNotBySet, test1) 
{
    CPPLib unique;
    std::vector<int> input1 = {1,1,2,3};
    std::vector<int> input2 = {1,2,3};
    unique.UniqueVectorNotBySet(input1);
    EXPECT_EQ(input1,input2);
}
//-----------------------------------------------------------------------------
TEST(UniqueVectorBySet, test1) 
{
    CPPLib uniqueSet;
    std::vector<int> input3 = {1,1,2,3};
    std::vector<int> input4 = {1,2,3};
    uniqueSet.UniqueVectorBySet(input3);
    EXPECT_EQ(input3, input4);
}
//-----------------------------------------------------------------------------
TEST(IntersectVectors, test2) 
{
    CPPLib intersection;
    std::vector<int> input5 = {1,5,2,3,1,2,4,6};
    std::vector<int> input6 = {1,5,9,10};
    std::vector<int> output3 = {1,5};
    std::vector<int> result = intersection.IntersectVectors(input5,input6);
    EXPECT_EQ(result, output3);
}