
# HW1 EE538 - Computing Principles for Electrical Engineers

- Please clone the repository, edit [README.md](README.md) to answer the questions, and fill up functions to finish the homework.
- For non-coding questions, fill out the answers below each question. Please write your answer there.
- For coding questions, please make sure that your code can run ```bazel run/test```. In this homework, you will need to fill up [cpplib.cc](src/lib/cpplib.cc) and tests in [tests](tests). **Do Not change or modify any given function names and input or output formats in both [cpplib.cc](src/lib/cpplib.cc) and tests in [tests](tests). Unexpected changes will result in **zero** credit.**
- For coding questions, there is a black box test for each question. All points are only based on passing the test cases or not (i.e. we don't grade your work by your source code). So, try to do comprehensive testing before your final submission.
- For submission, please push your answers to Github before the deadline.
- Deadline: **Tuesday, Feb 1st by 12 pm**
- Total: 130 points. 100 points is considered full credit.

## Question 1 (10 Points. Easy)

Create an account on GitHub and Stack Overflow and paste the link to your profile.

GitHub profile link: https://github.com/NikhilManjunathh

Stack Overflow profile link: https://stackoverflow.com/users/18075154/nikhilmanjunath

## Question 2 (20 Points. Medium)

Write a function called **FindAverage**, which returns the average of the inputs of a vector of integers. Use the steps the following steps:
1. Clearly specify input and output.
2. Write some example input and outputs. Try to cover corner cases. Feel free to make reasonable assumptions for the corner cases.
3. Implement your algorithm.
4. Write several unit tests that cover all corner cases, and test your algorithm using bazel.
You will need to only submit your algorithm implementation and the unit tests.

Answer:
Some example input and output cases:

i)  Input 1 = {1,2,3,4,5};
   
    Output 1 = 3
   
ii)  Input 2 = {};
    
    Output 2 = -1
    
iii)  Input 3 = {-2,-1,0,1,2};
     
     Output 3 = 0

## Question 3 (20 Points. Medium)

Compute the worst case run-time complexity of the below functions. Please provide both the computation process and final result for full credit.

```cpp
void Example1(int n) {
   int i = 1;
   while (i < n) {
       i *= 2;
   }
}
```

Answer: 

When n =1, the while loop runs 0 (log 1 to the base 2) times. When n = 2, the while loop runs 1 time (log 2 to the base 2). When n = 4, the while loop runs 2 times (log 4 to the base 2). And it continues. Hence, n moves towards infinity, the program runs log(n) times. 

Therefore, **the worst case run-time complexity of the function is O(log(n)).**

```cpp
void Example2(int n) {
   int count = 0;
   for (int i = 1; i <= n; i = i * 2) {
       for (int j = 1; j <= n; j++) {
           for (int k = 1; k <= n; k = k * 3) {
               count++;
           }
       }
   }
}
```

Answer: 

The outermost loop has i increased to twice its value everytime the loop runs. Hence, for any value 'n', this loop is run **log(n)** times, which is the time complexity for this loop. The second loop has j increased by 1 everytime the loop runs. Hence, for 'n', the loop is runs **n** times. For the innermost loop, the value of k increases to 3 times its value everytime the loop runs. Hence, the time complexity of this loop is also **log(n).** 

Therefore, **the worst case time complexity of the entire function is O(log(n)*n*log(n))**

```cpp
void Example3(int n) {
   int count = 0;
   for (int i = 0; i < n; i++)
       for (int j = i; j < i*i*i; j++)
            std::cout<<"*";
}
```

Hint: Note the ```j < i*i*i``` in the inner loop and compute the cube sequence to get the final result.

Answer:

When n = 0, we don't print out anything, as the outermost loop condition is not satisfied. When n = 1, again we don't print anything because although the outer loop is satisfied, the inner loop is not satisfied (because j = 1 is not less that 1^3). When n = 3, the program prints: 0 + (1-1) + (8-2) = 6 times. 

Hence for a large n, we can say that the program runs: **0 + (1-1) + (8-2) + (27-3) + ...... + (n^3 - n) times.**

This can be rewritten as: (1^3 + 2^3 + 3^3 + .... n^3) - (1 + 2 + 3 + ...... + n). 

When we look for worst case, the value of the sum of n^3 terms will be much larger than the sum of n terms. Hence the sum of the n terms can be ignored.

Now, **(1^3 + 2^3 + 3^3 + .... n^3) = (n(n+1)/2)^2**. As n becomes very large, the addition of 1 and division by 2 becomes insignificant. Hence it can be rewritten as **(n^2)^2 = n^4**

Therefore, **The worst case time complexity of the entire function is O(n^4)**

```cpp
int Example4(int n) {
   int count = 0;
   for (int i = 1; i < n; i *= 3) {
      for (int j = n; j > 0; j /= 3) {
          for (int k = 0; k < j; k++) {
              count += 1;
          }
      }
   }
   return count;
}
```

Hint: Note the ```i /= 3``` in the outer loop and compute the geometric sequence to get the final result.

Answer:

**The outermost loop runs log(n)** times. The other two, inner loops are independant of the outer loop and hence their runtimes are calculated seperately.

When n = 1, the value of count returned is equal to 1 (for the case j = 1, k = 0). When n = 3, the value of count returned is equal to 4 = 3 (j = 3, k = 0,1,2) + 1 (j = 1, k = 0). Similarly, for n = 9, value of count returned is 13.

Hence for a random 'n', the value of count returned can be given by: **(n + n/3 + n/3^2 + ..... + 1)**. This is a geometric progression. At infinity, the sum of this geometric progression is given by: n/(1-1/3) = **2n/3**. As n gets larger the 2/3 factor becomes insignificant. Hence, **the runtime for the inner two loops is n**.

Therefore, **The worst case time complexity of the entire function is O(nlog(n))**

## Question 4 (10 Points. Easy)

What does it mean when we say that the **Heap Sort (HS)** algorithm is asymptotically more efficient than the **Bubble Sort (BS)** algorithm **assuming the input is randomly ordered**? Support your choice with an explanation.


1. HS will always be a better choice for small size inputs
2. BS will always be a better choice for small size inputs
3. **HS will always be a better choice for large size inputs**
4. BS will always be a better choice for large size inputs
5. HS will always be a better choice for inputs of any size
6. BS will always be a better choice for inputs of any size


Answer: 

Heap Sort will always be better choice for large size inputs. This is because, Heap Sort is given by (n)(log(n)) and Bubble Sort is given by (n^2). For, large inputs, as the value of n increases, (n^2) becomes larger than (n)(log(n)). Hence, at n = infinity, Bubble Sort will have a larger runtime that Heap Sort. Hence Heap Sort is better for large size inputs.

## Question 5 (15 Points. Easy)

Write a simple function ```std::string CPPLib::PrintIntro()``` in [cpplib.cc](src/lib/cpplib.cc) to print your name, email, and any information about you that you want (e.g. your major, your expertise, your interests, etc) and write a test using GTest for your function in [tests/q5_student_test.cc](tests/q5_student_test.cc). We will run your code and see your printout!

Please create your test cases and run the following command to verify the functionality of your program.

```bash
bazel test tests:q5_student_test
```

## Question 6 (25 Points. Medium)

 Write a function ```std::vector<int> CPPLib::Flatten3DVector(const std::vector< std::vector< std::vector<int> > > &input)``` in [cpplib.cc](src/lib/cpplib.cc) to flatten a 3D vector into a 1D vector.

Example:\
Input: inputs = [[[1, 2], [3, 4]], [[5], [6], []], [[7, 8]]].\
Output: result = [1, 2, 3, 4, 5, 6, 7, 8].

Write several tests using GTest for your function in [tests/q6_student_test.cc](tests/q6_student_test.cc).\
(Hint: include cases with empty vectors)

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q6_student_test
```
What is the worst case runtime complexity of your implementation?

Answer: **The worst case runtime complexity of the implementation is O(n^3).** This is because there are 3 for loops and each loop runs (n) times. Hence runtime complexity = O((n)(n)(n)) = O(n^3)

## Question 7 (30 Points. Medium)

Write a function ```int CPPLib::climbStairs(int n)``` in [cpplib.cc](src/lib/cpplib.cc) using recursion to find how many distinct ways you can climb to the top. Your function should accept positive numbers less than 45 and return the number of ways. Further, write several tests using GTest for your function in [tests/q7_student_test.cc](tests/q7_student_test.cc) and compute the time complexity of your implementation.

*Rules of the climb stairs*\
You are climbing a staircase. Each time you can either climb 1 or 2 steps. It takes n steps to reach the top.

If there are 0 stairs, there is 0 way to the top. For negative input, please return -1.

For example, if the stairs number is 4(n = 4), it should have 5 ways to the top.\
1 + 1 + 1 + 1\
1 + 1 + 2\
1 + 2 + 1\
2 + 1 + 1\
2 + 2

Please create your test cases and run the following command to verify the functionality of your program.

```bash
bazel test tests:q7_student_test
```
**Hint**: Try to write a recursive relationship.
What is the complexity of your implementation?

Answer: The Complexity of the implementation is O(2^n). This is because for every step, we are breaking the recusrion into 2 parts 'n' times. Hence the complexity becomes O(2^n).
