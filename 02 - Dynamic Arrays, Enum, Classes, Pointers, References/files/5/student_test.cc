#include <iostream>
#include <vector>

#include "gtest/gtest.h"
#include "q.h"

// Write several test cases for each function.
//-----------------------------------------------------------------------------
// Make sure you add some test cases to check for nullptr.
TEST(ConcatenateDynamicArrays, test1) 
{
    CPPLib dynamicArray;
    int array1[3] = {1,2,3};
    int array2[6] = {9,8,7,6,5,4};
    int result[9] = {1,2,3,9,8,7,6,5,4};

    int* concatArray = dynamicArray.Concatenate(array1, 3, array2, 6);
    bool flag = true;

    for (int i = 0; i < 9; i++) {
        if (concatArray[i] != result[i]) {
            flag = false;
        }
    }

    EXPECT_EQ(flag,true);

}
//-----------------------------------------------------------------------------

TEST(ConcatenateVectors, test2) 
{
    CPPLib vectorConcat;
    std::vector<int> v1 = {1,2};
    std::vector<int> v2 = {2,3,4};
    std::vector<int> result1 = {1,2,2,3,4};
    EXPECT_EQ(vectorConcat.Concatenate(v1,v2),result1);

    std::vector<int> v3 = {1,2,3};
    std::vector<int> v4 = {};
    EXPECT_EQ(vectorConcat.Concatenate(v3,v4),v3);

    std::vector<int> v5 = {};
    std::vector<int> v6 = {1,6,4};
    EXPECT_EQ(vectorConcat.Concatenate(v5,v6),v6);
}
//-----------------------------------------------------------------------------
