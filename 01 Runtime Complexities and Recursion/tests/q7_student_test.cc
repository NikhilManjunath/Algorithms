#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
//Test 1: Input = 4
TEST(Q7_Student, ReturnIntro1) {
  CPPLib stairs;
  int input1 = 4;
  int expectedOutput1 = 5;
  auto outputValue1 = stairs.climbStairs(input1);
  EXPECT_EQ(outputValue1, expectedOutput1);
}

//Test 2: Input = -12
TEST(Q7_Student, ReturnIntro2) {
  CPPLib stairs;
  int input2 = -12;
  int expectedOutput2 = -1;
  auto outputValue2 = stairs.climbStairs(input2);
  EXPECT_EQ(outputValue2, expectedOutput2);
}

//Test 3: Input = 0
TEST(Q7_Student, ReturnIntro3) {
  CPPLib stairs;
  int input3 = 0;
  int expectedOutput3 = 0;
  auto outputValue3 = stairs.climbStairs(input3);
  EXPECT_EQ(outputValue3, expectedOutput3);
}

//Test 4: Input = 10
TEST(Q7_Student, ReturnIntro4) {
  CPPLib stairs;
  int input4 = 6;
  int expectedOutput4 = 13;
  auto outputValue4 = stairs.climbStairs(input4);
  EXPECT_EQ(outputValue4, expectedOutput4);
}