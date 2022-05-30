
# HW3 EE538
## University of Southern California
## Instructor: Arash Saifhashemi

Please clone this repository, edit README.md to answer the questions, and fill up functions to finish the homework.

- Please find each question in a separate folder under [files](/files).
- For non-coding questions, fill out the answers in the README file.
- For coding questions, edit the files and check them in.
- For coding questions unless specified, you should add unit tests to the student_test.cc. We will clone and test your repo using your tests and some other tests (that are not provided). Your code should pass all of them.
- For submission, please push your answers to Github before the deadline.
- Deadline: Tuesday, March 1st by 12:00 pm (noon)
- Rubrics:
  
| Question | Points |
| -- | -- |
| 1  | 28 |
| 2  | 15 |
| 3  | 30 |
| 4  | 32 |
| 5  | 30 |


- Total: 135 points. 100 points is considered full credit.
<pre>
Question 4
4.1
The output of the function is as follows:

Q1                                           //This gets printed because we have given cout as Q1
Non-parameterized constructor              //We are creating an object without passing parameters. Hence a constructor without parameter is executed (line 22). Thus is prints "Non-parameterized constructor"
o1.v_.size(): 0                             //The size is 0 because the v_ vector is empty and it has no data stored in it.
Destructor                               //Destructor gets printerd because the class object goes out of scope. Every time an object is killed, its destructor is called.


4.2
The output of the function is as follows:

Q2                                   //This gets printed because we have given cout as Q2
Non-parameterized constructor        //Object o1 created without parameter. Hence Non-parameterize constructor called and printed.
Parameterized constructor            //object o2 created with 2 parameters. Paramterized function (Line 29) gets called and printed
Copy constructor                     //Object 01 is copied to object 03. Hence Copy Constructor called and printed
Destructor                           //3 objects created, hence destructor is called 3 times to kill the objects once they go out of scope
Destructor
Destructor

4.3
The output of the function is as follows:

Q3                                 //This gets printed because we have given cout as Q3
Non-parameterized constructor      //Object o created without parameter. Hence Non-parameterize constructor called and printed.
Copy constructor                  //In DoSomthing1(o), we are passing the object by VALUE. Thus, there is a new object that gets created at line 76. Hence, Copy Constructor is called and printed.
Something 1.                      //Something 1 cout inside DoSomething1
Destructor                       //Destructor for the copy constructor
Destructor                       //Destructor for o

4.4
The output of the function is as follows:

Q4                               //This gets printed because we have given cout as Q4
Non-parameterized constructor    //Object o created without parameter. Hence Non-parameterize constructor called and printed.
Something 2.                     //In DoSomthing2, we are PASSING BY REFERENCE. Hence, no duplicate object created and Copy Constructor is NOT CALLED. Something 2 gets printed as we cout it inside Somthing2
Destructor                       //Only 1 destructor as only 1 object present.


4.5
The output of the function is as follows:

Q5                               //This gets printed because we have given cout as Q5
Non-parameterized constructor    //Object o created without parameter. Hence Non-parameterize constructor called and printed.
Something 3.                     //In DoSomthing3, we are again PASSING BY REFERENCE. Hence, no duplicate object created and Copy Constructor is NOT CALLED. Something 3 gets printed as we cout it inside Somthing3
Destructor                       //Only 1 destructor as only 1 object present.


4.6
The output of the function is as follows:

Q6                               //This gets printed because we have given cout as Q6
Non-parameterized constructor    //Object o created without parameter. Hence Non-parameterize constructor called and printed.
Copy constructor                 //02 = 0 is a copy constructor. Hence Copy Constructor is printed
Something 4.                     //Something 4 gets printed as we cout it inside Somthing4
Destructor                       //Destructor for o2
Destructor                       //Destructor for o

4.7
The output of the function is as follows:

Q7                               //This gets printed because we have given cout as Q7
Parameterized constructor        //MyClass(1,2) creates a parameterized constructor. Hence, printed.
Copy constructor                //Pair creates a class p1 which is a copy of MyClass(1, 2). Hence a copy constructor is called and printed.
Destructor                      //p1 = {MyClass(1, 2), 0} means the class is created and once we exit p1 = {}, we go out of scope and hence destructor is called.
p1.first.v_.size(): 0           //
p1.second: 0                    //We stored 0 in p.second. Hence, the output
Copy constructor               //copy constructor called again as p2 =p1
p2.first.v_.size(): 0          //
p2.second: 0                   //p2.second = p1.second = 0;
Destructor                    //2 Destructors for p1,p2
Destructor


4.8
The output of the function is as follows:

Q8                               //This gets printed because we have given cout as Q8
Parameterized constructor        //MyClass(1,2) creates a parameterized constructor. Hence, printed.
Copy constructor                //Pair creates a class p1 which is a copy of MyClass(1, 2). Hence a copy constructor is called and printed.
Destructor                      //p1 = {MyClass(1, 2), 0} means the class is created and once we exit p1 = {}, we go out of scope and hence destructor is called.
Something 2.                    //p.second = 0,1,2 so we pushback to p1 3 times. Hence, DoSomthing2 executed 3 times. So Something 2 printed thrice.
Something 2.
Something 2.
Destructor


4.9
The output of the function is as follows:

Q9                           //This gets printed because we have given cout as Q9
Parameterized constructor    //o points to new MyClass(1, 2) which is a parameterized contructor. Hence, Parameterized Constructor. We are not deleting the created memory. Hence, no destructor.


4.10
The output of the function is as follows:

Q10                           //This gets printed because we have given cout as Q10
Parameterized constructor    //o points to new MyClass(1, 2) which is a parameterized contructor. Hence, Parameterized Constructor. 
Destructor                   //we are calling delete o. Hence, the Destructor is called and printed.


4.11
The output of the function is as follows:

Q11                                  //This gets printed because we have given cout as Q11
Non-parameterized constructor       //Non-parameterized object created. Hence, non-parameterized constructor printed
Copy constructor                   //MyClass internally paired hence the copy constructor is called
Parameterized constructor           //parameterized object created. Hence, Parameterized constructor printed
Copy constructor                    //MyClass internally paired hence the copy constructor is called
Parameterized constructor           //parameterized object created. Hence, Parameterized constructor printed
Copy constructor                    //MyClass internally paired hence the copy constructor is called
Copy constructor                   //Pair copies all the values to map. Hence 3 copy constructors called again.
Copy constructor
Copy constructor
Destructor                          //After map initialization, destructor called 3 times
Destructor
Destructor
Destructor                          //The 3 objects called in class go out of scope. Hence 3 more destructors are called.
Destructor
Destructor
Copy constructor                     //Each pair taken 3 times. Copy contsructor created and when out of scope, destroyed
Destructor
Copy constructor
Destructor
Copy constructor
Destructor
Destructor                           //Out of scope. Hence, 3 destructors are created.
Destructor
Destructor


4.12
The output of the function is as follows:

Q12                                //This gets printed because we have given cout as Q12
Non-parameterized constructor       //Non-parameterized object created. Hence, non-parameterized constructor printed
Copy constructor                   //MyClass internally paired hence the copy constructor is called
Parameterized constructor           //parameterized object created. Hence, Parameterized constructor printed
Copy constructor                    //MyClass internally paired hence the copy constructor is called
Parameterized constructor           //parameterized object created. Hence, Parameterized constructor printed
Copy constructor                    //MyClass internally paired hence the copy constructor is called
Copy constructor                   //Pair copies all the values to map. Hence 3 copy constructors called again.
Copy constructor
Copy constructor
Destructor                          //After map initialization, destructor called 3 times
Destructor
Destructor
Destructor                          //The 3 objects called in class go out of scope. Hence 3 more destructors are called.
Destructor
Destructor
Destructor                          //Out of scope. Hence, 3 destructors are created.
Destructor
Destructor


4.13
The output of the function is as follows:

Q13                               //This gets printed because we have given cout as Q13
Parameterized constructor         //o points to new MyClass(1, 2) which is a parameterized contructor. Hence, Parameterized Constructor. 
Destructor                        //we are calling delete o. Hence, the Destructor is called and printed.


4.14
The output of the function is as follows:

Q14                                     //This gets printed because we have given cout as Q14
Parameterized constructor               //Object initialized with parameter. Hence, parameterized constructor called.
Operation took: 3186 milliseconds       //Time taken by StoreStartTime is printed out, which is 3186ms
Copy constructor                        //First for loop run, object copied. Hence copy constructor.
Copy constructor                        //Copy COnstructor inside dosomthing1 called
Something 1.                            //Running dosomthing1
Destructor                              //Out of scope. Hence, Destructor
o2.v_.size(): 100000000                 //Size is returned which is 100000000
Destructor                              //Out of scope -> Destructor
Copy constructor                        //Second for loop run, same as above
Copy constructor
Something 1.
Destructor
o2.v_.size(): 100000000
Destructor
Operation took: 16648 milliseconds      //Time printed out
Destructor


Time taken Pass by Value being used in DoSomthing1. Hence it takes more time to initialize and call constructors.


4.15
The output of the function is as follows:

Q15                                    //This gets printed because we have given cout as Q15
Parameterized constructor              //Object initialized with parameter. Hence, parameterized constructor called.
Operation took: 1262 milliseconds      //Prints time taken by PrintAndGetDuration function.
Copy constructor                       //First for loop run, object copied. Hence copy constructor. 
Something 2.                           //Pass by Reference in dosomthing2. Hence, no new copy constructor
o2.v_.size(): 100000000                //Size is returned which is 100000000
Destructor                             //Out of scope. Hence, Destructor
Copy constructor                       //2nd run of loop
Something 2.
o2.v_.size(): 100000000
Destructor
Operation took: 469 milliseconds      //Operation time smaller than q14 as we use pass by reference.
Destructor

DoSomthing2 used Pass by Reference whereas dosomthing1 used pass by value. Hence, the time taken by q15 to execute is lesser.


4.16
The output of the function is as follows:

Q16                                    //This gets printed because we have given cout as Q16

</pre>

See [cpp-template](https://github.com/ourarash/cpp-template) for help on installing bazel and debugging.
