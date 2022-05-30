#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
//Test 1
TEST(Q6_Student, ReturnIntro) {
  CPPLib obj;
  std::vector< std::vector< std::vector<int> > > inputValue = {{{1,2},{3,4}},{{5},{6},{}},{{7,8}}};
  std::vector<int> expectedOutput = { 1, 2, 3, 4, 5, 6, 7, 8};
  auto outputValue = obj.Flatten3DVector(inputValue);


  EXPECT_EQ(outputValue, expectedOutput);
}

//Test 2: Empty Imput
TEST(Q6_Student, ReturnIntro2) {
  CPPLib obj;
  std::vector< std::vector< std::vector<int> > > inputValue1 = {{{}}};
  std::vector<int> expectedOutput1 = {};
  auto outputValue1 = obj.Flatten3DVector(inputValue1);


  EXPECT_EQ(outputValue1, expectedOutput1);
}

//Test 3
TEST(Q6_Student, ReturnIntro3) {
  CPPLib obj;
  std::vector< std::vector< std::vector<int> > > inputValue2 = {{{1,2,3},{7,4}},{{5,4,1},{6},{1}},{{7,8}}};
  std::vector<int> expectedOutput2 = { 1, 2, 3, 7, 4, 5, 4, 1, 6, 1, 7, 8};
  auto outputValue2 = obj.Flatten3DVector(inputValue2);


  EXPECT_EQ(outputValue2, expectedOutput2);
}

//Test 4
TEST(Q6_Student, ReturnIntro4) {
  CPPLib obj;
  std::vector< std::vector< std::vector<int> > > inputValue4 = {{{},{}},{{},{1},{1}},{{}}};
  std::vector<int> expectedOutput4 = { 1, 1};
  auto outputValue4 = obj.Flatten3DVector(inputValue4);


  EXPECT_EQ(outputValue4, expectedOutput4);
}