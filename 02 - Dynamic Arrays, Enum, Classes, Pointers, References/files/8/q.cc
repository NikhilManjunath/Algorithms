#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

#include "q.h"

// Write a function that takes a vector of positive integers as input. The
// output is the same vector where all duplicates are removed. Note that the
// output is the same vector means the function's return type should be void and
// do the modifications on the input vector. Example: before: v=[1, 2, 2, 4],
// after : v=[1, 2, 4] Solve this for the following cases: You cannot use
// std::set
void CPPLib::UniqueVectorNotBySet(std::vector<int> &input) 
{
    std::vector<int> unique;
    for (int i = 0; i < input.size(); i++) {
        if (std::count(unique.begin(), unique.end(), i) == 0) {
            unique.push_back(input[i]);
        }
    }

    input = unique;
}
// You can use std::set
void CPPLib::UniqueVectorBySet(std::vector<int> &input) 
{
    std::set<int> resultSet(input.begin(),input.end());

    std::vector<int> result_vector(resultSet.begin(), resultSet.end());

    input = result_vector;
}

// Write a function that takes two vectors v1 and v2 and returns a new vector
// that is the intersection of the values in v1 and v2. All the values in return
// vector should be unique.
// Example: input: v1={1, 2, 2, 3}, v2={3, 4, 4, 5},
// output = {1, 2, 3, 4, 5}
std::vector<int> CPPLib::IntersectVectors(std::vector<int> &input1,
                                          std::vector<int> &input2) 
                                          {
                                              std::vector<int> intersection;
                                              std::set<int> input1Set(input1.begin(),input1.end());
                                              std::set<int> input2Set(input2.begin(),input2.end());

                                              for (auto i: input1Set ) {
                                                  if (std::count(input2Set.begin(), input2Set.end(), i) == 1) {
                                                      intersection.push_back(i);
                                                  } 
                                              }

                                              return intersection;
                                          }
