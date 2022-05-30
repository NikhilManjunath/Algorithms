#include "q.h"

#include <iostream>
#include <vector>

// Concatenate two dynamic arrays.
// Example:
// array_1 = {1, 2}, size_1 = 2
// array_2 = {2, 3, 4}, size_12 = 3
// Output: {1, 2, 2, 3, 4}.
// Question 1: Why did we have to proved size_1, size_2 as an input?
//The size of the dynamic array is unknown till execution. Hence, it is necessary to mention the sizes of the arrays as only array names will be insufficient to allocate memory.
// Question 2: How can we know the size of the output?
//We can know the size of the output by adding the sizes of the input arrays.
int* CPPLib::Concatenate(int* array_1, int size_1, int* array_2, int size_2) 
{
    int* concat_array = new int[size_1+size_2];
    for (int i = 0; i < size_1; i++) {
        concat_array[i] = array_1[i];
    }

    for (int j = 0; j < size_2; j++) {
        concat_array[size_1+j] = array_2[j];
    }

    return concat_array;
}
//-----------------------------------------------------------------------------
// Concatenate two dynamic vectors.
// Example:
// vector_1 = {1, 2}
// vector_2 = {2, 3, 4}
// Output: {1, 2, 2, 3, 4}.
// Question 1: Why didn't we provide the sizes?
//In vector implementation, the size allocation is done internally. When the vector is declared initially, its size is 0. As we keep pushing back elements to the vector, the vector size will increase internally.
// Question 2: We have two functions with the name of Concatenate. Is this ok?
//Yes, it is ok to have two functions with the name of Concatenate. This is called Method Overriding. Although the functions have same name, they have different parameter. The runtime parameters will define which function is called.
std::vector<int> CPPLib::Concatenate(std::vector<int>& vector_1,
                                     std::vector<int>& vector_2) 
                                     {
                                         std::vector<int> concat_vector;
                                         for (int i = 0; i < vector_1.size(); i++) {
                                             concat_vector.push_back(vector_1[i]);
                                         }

                                         for (int j = 0; j < vector_2.size(); j++) {
                                             concat_vector.push_back(vector_2[j]);
                                         }

                                         return concat_vector;
                                     }
//-----------------------------------------------------------------------------
