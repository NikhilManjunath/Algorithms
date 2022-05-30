#include "q.h"
#include <limits.h>
#include <iostream>
#include <vector>
#include<algorithm>

//Student Class
//Parameterized Constructor
Student::Student(std::string name, int grade) :name(name), grade(grade) {}
// Student::Student(std::string name, int grade)
// {
//     name = name;
//     grade = grade;
// }

// //Non Parameterized Constructor
Student::Student() : name("NO_NAME"), grade(INT_MIN) {}
// Student::Student()
// {
//     name = "NO_NAME";
//     grade = INT_MIN;
// }

// //Copy Constructor
Student:: Student(const Student& rhs) : name(rhs.name), grade(rhs.grade) {}
// Student::Student(const Student& rhs)
// {
//     name = rhs.name;
//     grade = rhs.grade;
// }


//Returns true if grade is less than the grade of other Student objects
bool Student::operator<(const Student& rhs) const
{
    if (grade < rhs.grade)
    {
        return true;
    }

    else
    {
        return false;
    }
}

// Returns true if grade is greater than the grade of other Student objects
bool Student::operator>(const Student& rhs) const
{
    if (grade > rhs.grade)
    {
        return true;
    }

    else
    {
        return false;
    }
}

// Returns true if grade is equal to the grade of other Student objects 
bool Student::operator==(const Student& rhs) const
{
    if (grade == rhs.grade)
    {
        return true;
    }

    else
    {
        return false;
    }
}


//Max Heap
//Parameterized constructor: creates a max heap from the given input.
//Needs checking
StudentMaxHeap::StudentMaxHeap(std::vector<Student>& input)
{
    for (auto i:input)
    {
        push(i);
    }
}



// Returns the parent of a node given its index in the tree
Student StudentMaxHeap::GetParent(int i)
{
    if (i == 0)
    {
        return Student("NO_NAME", INT_MIN);
    }

    else{
        return data_[(i-1)/2];
    }
}

// Returns the left child of a node given its index in the tree
Student StudentMaxHeap::GetLeft(int i)
{
    // if (data_.size() == 0)
    // {
    //     return Student();
    // }

    if (2*i+1 > data_.size()-1)
    {
        return Student("NO_NAME", INT_MIN);
    }

    else{
        return data_[2*i+1];
    }
}

// Returns the right child of a node given its index in the tree
Student StudentMaxHeap::GetRight(int i)
{
    // if (data_.size() == 0)
    // {
    //     return Student();
    // }

    if (2*i+2 > data_.size()-1)
    {
        return Student("NO_NAME", INT_MIN);
    }

    else{
        return data_[2*i+2];
    }
}

// Returns the index of the parent of a node given its index in the tree.
int StudentMaxHeap::GetParentIndex(int i)
{
    // if (data_.size() == 0)
    // {
    //     return INT_MAX;
    // }

    if (i == 0)
    {
        return INT_MAX;
    }

    else{
        return (i-1)/2;
    }
}

// Returns the index of the left child of a node given its index in the tree.
int StudentMaxHeap::GetLeftIndex(int i)
{
    // if (data_.size() == 0)
    // {
    //     return INT_MAX;
    // }

    if (2*i+1 > data_.size()-1)
    {
        return INT_MAX;
    }

    else{
        return 2*i+1;
    }
}

// Returns the index of the right child of a node given its index in the tree.
int StudentMaxHeap::GetRightIndex(int i)
{
    // if (data_.size() == 0)
    // {
    //     return INT_MAX;
    // }

    if (2*i+2 > data_.size()-1)
    {
        return INT_MAX;
    }

    else{
        return 2*i+2;
    }
}

// Returns the index of the largest child of a node given its index in the tree.
int StudentMaxHeap::GetLargestChildIndex(int i)
{

    // if (data_.size() == 0)
    // {
    //     return INT_MAX;
    // }

    if (GetLeft(i) > GetRight(i))
    {
        return GetLeftIndex(i);
    }

    else
    {
        return GetRightIndex(i);
    }
}

// Returns the top of the heap. 
Student StudentMaxHeap::top()
{
    if (data_.size() == 0)
    {
        return Student();
    }

    else
    {
        return data_[0];
    }
}

// Adds a new Student to the heap.
void StudentMaxHeap::push(const Student& student)
{
    data_.push_back(student);
    TrickleUp(data_.size()-1);
}

// Removes the top.
bool StudentMaxHeap::pop()
{
    if (data_.size() == 0)
    {
        return false;
    }
    else
    {
        data_[0] = data_.back();
        data_.pop_back();
        TrickleDown(0);
        return true;
    }
}

//Trickle Up
void StudentMaxHeap::TrickleUp(int i)
{
    // while (i != 0 && GetParent(i) < data_[i])
    // {
    //     std::swap(data_[i],data_[GetParentIndex(i)]);
    //     i = GetParentIndex(i);
    // }

    while (i != 0 && GetParent(i) < data_[i])
    {
        Student temp;
        temp = data_[i];
        data_[i] = data_[GetParentIndex(i)];
        data_[GetParentIndex(i)] = temp;
        i = GetParentIndex(i);
    }

}

//Trickle Down
void StudentMaxHeap::TrickleDown(int i)
{
    if (GetLeftIndex(i) > data_.size() && GetRightIndex(i) > data_.size())
    {
        return;
    }

    int largest_child_index = GetLargestChildIndex(i);

    if (data_[i] < data_[largest_child_index])
    {
        std::swap(data_[i], data_[largest_child_index]);
        TrickleDown(largest_child_index);
    }
}

// Converts the given input into a max heap and stores that into data_.
void StudentMaxHeap::ConvertToHeap(const std::vector<Student>& input)
{
    for(auto i:input)
    {
      push(i);
    }
}



// Sorts the given input vector of students in place. The sort is in ascending
// order based on the grades.
void heapify(std::vector<Student> input,int n,int i)
{
    int max = i; 
    int left = 2*i+1;
    int right = 2*i+2;
    if(left < n && input[left] > input[max])
    {
        max = left;
    }
    if(right < n && input[right] > input[max])
    {
        max = right;
    }
    if (max != i)
    {
        std::swap(input[i], input[max]);
        heapify(input,n,max);
    }
   
}


void HeapSort(std::vector<Student>& input)
{
    StudentMaxHeap s_maxheap;
    s_maxheap.ConvertToHeap(input);
    std::vector<Student> output;
    while(!s_maxheap.empty())
    {
        output.push_back(s_maxheap.top());
        s_maxheap.pop();
    }
    std::reverse(output.begin(), output.end());
    input = output;
}



