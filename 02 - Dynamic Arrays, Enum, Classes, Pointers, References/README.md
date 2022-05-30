
# HW2 EE538
## University of Southern California
## Instructor: Arash Saifhashemi

Please clone this repository, edit README.md to answer the questions, and fill up functions to finish the homework.

- Please find each question in a separate folder under [files](/files).
- For non-coding questions, fill out the answers in the README file.
- For coding questions, edit the files and check them in.
- For coding questions unless specified, you should add unit tests to the student_test.cc. We will clone and test your repo using your tests and some other tests (that are not provided). Your code should pass all of them.
- For submission, please push your answers to Github before the deadline.
- Deadline: Tuesday, Feburary 15th by 12:00 pm (noon)
- Rubrics:
  
| Question | Points |
| -- | -- |
| 1  | 10 |
| 2  | 25 |
| 3  | 20 |
| 4  | 10 |
| 5  | 20 |
| 6  | 25 |
| 7  | 10 |
| 6  | 15 |

- Total: 135 points. 100 points is considered full credit.

**Question 5:**

**Question 5.1: Why did we have to proved size_1, size_2 as an input?**

**Answer**:The size of the dynamic array is unknown till execution as dynamic arrays are pointers. Hence, it is necessary to mention the sizes of the arrays as only array names will be insufficient to allocate memory.

**Question 5.2: How can we know the size of the output?**

**Answer**: We can know the size of the output by adding the sizes of the input arrays.

**Question 5.3: Why didn't we provide the sizes?**

**Answer**: In vector implementation, the size allocation is done internally. When the vector is declared initially, its size is 0. As we keep pushing back elements to the vector, the vector size will increase internally. Also, we can find out the size of the vector using vector.size(). Hence specifying it is not necessary.

**Question 5.4: We have two functions with the name of Concatenate. Is this ok?**

**Answer**: Yes, it is ok to have two functions with the name of Concatenate. This is called Method Overriding. Although the functions have same name, they have different parameters. The parameters called during runtime will define which function is called.

**Question 6:**

**For the ReturnElement1 function, the error occurs if i is greater than the number of elements in the vector. Therefore, we need to write an if-else case to make sure that i is lesser than the number of elements in the vector. If not, return -1.**

**6.1 We are defining a vector but it is not being initialized. Hence, we use cin to read input and push_back to push the element to the vector.**

**6.2 Memory has not been allocated to the pointer. Hence, we allocate it by initializing using new int. This will make sure that the right address is accessed during execution.**

**6.3 The code seems to be correct and has no issues. We could however delete the dynamic memory allocated for a and b once we cout the desired output.**

**6.4 a++ and b++ means that we are incrementing to point at the next adress location. This could cause a problem if we try to access the value pointed by these addresses as some addresses are not accessible. Hence we create two new pointers c and d using new int and assign to the new location.**

**6.5 It is an infinite loop as i is being incremented and decremented in the loop! The loop will continue to stay at i = 0. Hence, we modify the code to ensure loop is finite and terminates.**

See [cpp-template](https://github.com/ourarash/cpp-template) for help on installing bazel and debugging.
