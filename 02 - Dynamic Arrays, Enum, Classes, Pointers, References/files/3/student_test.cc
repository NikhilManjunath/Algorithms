#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------
TEST(Calculate, test1) 
{ 
    CPPLib operations;
    EXPECT_EQ(operations.Calculate(1, 1, Operation::add),2); 
    EXPECT_EQ(operations.Calculate(1, 15, Operation::subtract),-14); 
    EXPECT_EQ(operations.Calculate(10, 2, Operation::division),5); 
    EXPECT_EQ(operations.Calculate(5, 12, Operation::multiplication),60); 
}
//-----------------------------------------------------------------------------

TEST(Calculate, test2) 
{
    CPPLib operations2;
    EXPECT_EQ(operations2.Calculate(12, 25, Operation::bitwise_AND),8); 
    EXPECT_EQ(operations2.Calculate(5, 9, Operation::bitwise_OR),13); 
    EXPECT_EQ(operations2.Calculate(10, 14, Operation::bitwise_XOR),4); 
}
//-----------------------------------------------------------------------------
