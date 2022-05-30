#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------
TEST(MyTest, Test1) 
{
    std::vector<int> weights = {1,2,1,12,4};
    std::vector<int> values = {1,2,2,4,10};
    int w = 15;

    int max_value = knapSack01NoDynamicProgramming(weights,values,w);
    EXPECT_EQ(max_value,15);
}

TEST(MyTest2, Test2) 
{
    std::vector<int> weights = {1,2,1,12,4};
    std::vector<int> values = {1,2,2,4,10};
    int w = 15;

    int max_ = knapSack01Tablulation(weights,values,w);
    EXPECT_EQ(max_,15);
}

TEST(MyTest3, Test3) 
{
    std::vector<int> weights = {1,2,1,12,4};
    std::vector<int> values = {1,2,2,4,10};
    int w = 15;

    int max_ = knapSack01Memo(weights,values,w);
    EXPECT_EQ(max_,15);
}
