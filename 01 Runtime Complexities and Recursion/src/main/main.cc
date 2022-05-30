#include <iostream>
#include "src/lib/cpplib.h"

int main() {

  //Question 2
  CPPLib cpplib;
  std::vector<int> input = {1,2,3,4,5,6};
  std::cout << cpplib.FindAverage(input) << std::endl;

  //Question 5
  CPPLib s;
  std::cout << s.PrintIntro() << std::endl;

  //Question 6
  CPPLib vec;
  std::vector< std::vector< std::vector<int> > > inputValue = {{{1,2},{3,4}},{{5},{6},{}},{{7,8}}};
  auto outputValue = vec.Flatten3DVector(inputValue);

  for(auto &value : outputValue)
  {
     std::cout << value << std::endl;
  }

  //Question 7
  CPPLib stairs;
  int value = 5;
  std::cout << stairs.climbStairs(value) << std::endl;


  return 0;
}