#include <iostream>
#include <vector>

// Returns element at i index.
//Here the mistake was that we were not verifying whether i was less than the size of the vector. If i is greater than the size of the vector, then the program would not execute and hence would throw an error.
int ReturnElementI(std::vector<int>& input, int i) 
{ 
  if (i > input.size()) {
    return -1;
  }
  else {
    return input[i]; 
    }
}

// - What is wrong with each piece of code below?
// - For each case modify the code so that the issue is fixed:
int main() {
  // Question 1:
  //Answer: We are defining a vector but it is not being initialized. Hence, we use cin to read input and push_back to push the element to the vector.
  {
    std::vector<int> elements;

    // Number of values to read from the input
    int number_of_items;
    std::cin >> number_of_items;

    // Reading elements from the input.
    for (int i = 0; i < number_of_items; i++) {
      int element;
      std::cin >> element;
      elements.push_back(element);
    }
  }

  // // Question 2:
  //Answer: Memory has not been allocated to the pointer. Hence, we allocate it by initializing using new int. This will make sure that the right address is accessed during execution.
  {
    int* a = new int;
    std::cin >> (*a);
    (*a)++;
    std::cout << "(*a): " << (*a) << std::endl;
  }

  // // Question 3:
  //Answer: The code seems to be correct and has no issues. We could however delete the dynamic memory allocated for a and b once we cout the desired output.
  {
    int* a = new int;
    int* b = new int;
    std::cin >> (*a);
    std::cin >> (*b);

    std::cout << "(*a) + (*b): " << (*a) + (*b) << std::endl;
    delete a;
    delete b;
  }

  // // Question 4:
  //a++ and b++ means that we are incrementing to point at the next adress location. This could cause a problem if we try to access the value pointed by these addresses as some addresses are not accessible.
  //Hence we create two new pointers c and d using new int and assign to the new location.
  {
    int* a = new int;
    int* b = new int;
    std::cin >> (*a);
    std::cin >> (*b);
    std::cout << "(*a) + (*b): " << (*a) + (*b) << std::endl;

    //a++; //Wrong. Going to next memory location
    //b++;
    int* c = new int;
    int* d = new int;
    std::cin >> (*c);
    std::cin >> (*d);
    std::cout << "(*c) + (*d): " << (*c) + (*d) << std::endl;
    delete a;
    delete b;
    delete c;
    delete d;
  }

  // // Question 5:
  //Answer: It is an infinite loop as i is being incremented and decremented in the loop! The loop will continue to stay at i = 0. Hence, we modify the code to ensure loop is finite and terminates.
  {
    for (int i = 0; i < 10; i++) {
      std::cout << "i: " << i << std::endl;
      //i = i - 1;
      std::cout << "i-1: " << i-1 << std::endl;
    }
  }

  return 0;
}