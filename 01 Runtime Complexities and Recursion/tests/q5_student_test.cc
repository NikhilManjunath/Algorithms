#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file

//Test Case 1: Pass
TEST(Q5_Student, ReturnIntro) {
  CPPLib s;
  EXPECT_EQ(s.PrintIntro(),"Nikhil, nikhilm6@usc.edu, USC");
}

//Test Case 2: Fail
// TEST(Q5_Student, ReturnIntro) {
//   CPPLib s;
//   EXPECT_EQ(s.PrintIntro(),"Nikhil Manjunath");
// }