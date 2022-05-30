// NOTE: Add your own q2 tests in this file
#include "src/lib/cpplib.h"
#include <sys/types.h>
#include <vector>
#include <iostream>
#include <string>

#include "gtest/gtest.h"

//Test Case 1: {1,2,3,4,5} -> Pass
TEST(CPPLibTest, FindAverage_Match) {
    CPPLib cpplib;
    std::vector<int> input = {1,2,3,4,5};
    EXPECT_EQ(cpplib.FindAverage(input),3.0);
}

//Test Case 2: {1,2,3,4,5,6} -> Fail
// TEST(CPPLibTest, FindAverage_Mismatch) {
//     CPPLib cpplib;
//     std::vector<int> input = {1,2,3,4,5,6};
//     EXPECT_EQ(cpplib.FindAverage(input),3.0);
// }

//Test Case 3: {}
TEST(CPPLibTest, FindAverage_Empty) {
    CPPLib cpplib;
    std::vector<int> input = {};
    EXPECT_EQ(cpplib.FindAverage(input),-1);
}
