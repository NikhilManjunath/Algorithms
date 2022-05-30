#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------
TEST(MyTest, Test1) 
{
    int n = 5;
    EXPECT_EQ(Fibonacci(n),8);

    EXPECT_EQ(Fibonacci(7),21);
}

TEST(MyTest2, Test2)
{
    std::vector<int> coins= {1, 2, 3};
    int amount = 6 ;

    EXPECT_EQ(CoinChangeTabulation(coins, amount), 2);
    EXPECT_EQ(CoinChangeMemo(coins,amount),2);
}

TEST(MyTest3, Test3)
{
    std::vector<int> coins= {11, 22, 33, 44, 55};
    int amount = 55 ;

    EXPECT_EQ(CoinChangeTabulation(coins, amount), 1);
    EXPECT_EQ(CoinChangeMemo(coins,amount),1);
}


TEST(MyTest3, Test4)
{
    std::vector<int> coins= {10, 12, 34, 78, 111};
    int amount = 0 ;

    EXPECT_EQ(CoinChangeTabulation(coins, amount), 0);
    EXPECT_EQ(CoinChangeMemo(coins,amount),0);
}

TEST(MyTest3, Test5)
{
    std::vector<int> coins= {10, 12, 34, 78, 111};
    int amount = -12 ;

    EXPECT_EQ(CoinChangeTabulation(coins, amount), -1);
    EXPECT_EQ(CoinChangeMemo(coins,amount),-1);
}






