#include <iostream>
#include <string>
#include<limits.h>
#include<vector>
#include "gtest/gtest.h"
#include "q.h"


//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------
TEST(MyTest, Test1) 
{
    std::vector<std::string> name = {"Nikhil", "Peter", "Rock", "Will", "Smith"};
    std::vector<int> grade = {22,9,38,30,57};
    std::vector<Student> student={};
    
    for(int i = 0; i < name.size(); i++)
    {
        student.push_back(Student(name[i], grade[i]));
    }

    StudentMaxHeap s = StudentMaxHeap(student);
    EXPECT_EQ(s.GetParent(2).grade, 57);
    EXPECT_EQ(s.GetParent(1).grade, 57);
    EXPECT_EQ(s.GetLeft(0).grade, 38);
    EXPECT_EQ(s.GetRight(0).grade, 22);
    EXPECT_EQ(s.GetLeft(1).grade, 9);
    EXPECT_EQ(s.GetRight(1).grade, 30);
    EXPECT_EQ(s.GetLeft(2).grade,INT_MIN);
    EXPECT_EQ(s.GetRight(2).grade,INT_MIN);
    EXPECT_EQ(s.size(),5);
    EXPECT_EQ(s.empty(), false);
};

TEST(MyTest2, Test2)
{
    //Non Parameterized Constructor
    Student new_student;
    EXPECT_EQ(new_student.name, "NO_NAME");
    EXPECT_EQ(new_student.grade,INT_MIN);

    //Parameterized Constructor
    Student new_student1("Nikhil",97);
    EXPECT_EQ(new_student1.name, "Nikhil");
    EXPECT_EQ(new_student1.grade,97);

    //Copy Constructor
    Student new_s("Adam",22);
    Student new_student2 = new_s;
    EXPECT_EQ(new_student2.name, "Adam");
    EXPECT_EQ(new_student2.grade,22);

    //Operator <
    bool result = new_student1.operator<(new_student2);
    EXPECT_EQ(result,false);
    bool result1 = new_student1.operator>(new_student2);
    EXPECT_EQ(result1,true);
    bool result2 = new_student1.operator==(new_student2);
    EXPECT_EQ(result2,false);
};

TEST(MyTest3, Test3)
{
    std::vector<std::string>student_name = {"A", "B", "C", "D", "E", "F", "G"};
    std::vector<int> student_grades = {17,25,12,48,23,56,1};
    std::vector<int> expected_grades = {1,12,17,23,25,48,56};
    std::vector<int> sorted_grades = {};
    std::vector<Student> students;
    
    for(int i = 0; i < student_name.size(); i++)
    {
        students.push_back(Student(student_name[i], student_grades[i]));
    }

    HeapSort(students);
    for (int j = 0; j < student_name.size(); j++)
    {
        sorted_grades.push_back(students[j].grade);
    }

    EXPECT_EQ(sorted_grades,expected_grades);
}

TEST(MyTest4, Test4)
{
    std::vector<std::string> names = {"A", "B", "C", "D", "E", "F", "G"};
    std::vector<int> grades = {17,25,12,48,23,56,1};
    std::vector<Student> students={};
    
    for(int i = 0; i < names.size(); i++)
    {
        students.push_back(Student(names[i], grades[i]));
    }

    StudentMaxHeap s_list = StudentMaxHeap(students);

    Student top_student = s_list.top();
    EXPECT_EQ(top_student.grade, 56);
    EXPECT_EQ(top_student.name, "F");

    EXPECT_EQ(s_list.GetParent(1).grade, 56);
    EXPECT_EQ(s_list.GetLeft(0).grade, 25);
    EXPECT_EQ(s_list.GetRight(0).grade, 48);
    EXPECT_EQ(s_list.GetLeft(1).grade, 17);
    EXPECT_EQ(s_list.GetRight(1).grade, 23);
    EXPECT_EQ(s_list.GetLeft(2).grade,12);
    EXPECT_EQ(s_list.GetRight(2).grade,1);

    EXPECT_EQ(s_list.GetLargestChildIndex(0),2);
    EXPECT_EQ(s_list.GetLargestChildIndex(1),4);
    EXPECT_EQ(s_list.GetLargestChildIndex(2),5);
    EXPECT_EQ(s_list.size(), 7);

   // Student new_student1("H",97);
   std::string name = "H";
   int grade = 97;
   s_list.push(Student(name, grade));
   EXPECT_EQ(s_list.size(), 8);
   EXPECT_EQ(s_list.GetParent(1).grade, 97);

   EXPECT_EQ(s_list.pop(), true);
   EXPECT_EQ(s_list.GetParent(1).grade, 56);
}



