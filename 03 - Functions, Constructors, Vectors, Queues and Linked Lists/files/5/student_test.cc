#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------
//TEST(SinglyLinkedList, Test1) {}

TEST(empty, Empyt_Test)
{
    SinglyLinkedList obj;
    bool returnValue = true;
    EXPECT_EQ(obj.empty(), returnValue);
}

TEST(size, size_test)
{
    SinglyLinkedList obj;
    EXPECT_EQ(obj.size(), 0);
}

TEST(Linkedlist, copyconst) 
{
    SinglyLinkedList list1;
    EXPECT_TRUE(list1.empty());
    EXPECT_EQ(nullptr,list1.head());
    list1.push_back(1);
    list1.push_back(2);
    SinglyLinkedList list2 = list1;
    EXPECT_FALSE(list2.empty());
    EXPECT_EQ(1,list2.head()->val);
}

TEST(LinkedList, Size) 
{
    SinglyLinkedList sizee;
    sizee.push_back(12);
    sizee.push_back(1);
    sizee.push_back(2);
    sizee.push_back(7);
    EXPECT_EQ(sizee.size(),4);
}


TEST(LinkedList, Test1) 
{
    SinglyLinkedList test;
    
    test.push_back(7);
    test.push_back(2);
    EXPECT_EQ(test.head()->val,7);
}

TEST(LinkedList, Test2) 
{
    SinglyLinkedList pop;
    pop.push_back(1);
    pop.push_back(2);
    pop.push_back(3);
    pop.push_back(4);
    pop.push_back(5);
    pop.push_back(6);
    std::vector<int> vector = {1,2,3,4,5,6};
    EXPECT_EQ(vector,pop.convert_to_vector()); 
}

TEST(LinkedList, Test3) 
{
    SinglyLinkedList pointer;
    pointer.push_back(1);
    pointer.push_back(2);
    pointer.push_back(3);
    pointer.push_back(17);
    EXPECT_EQ(17,pointer.GetBackPointer()->val);
}

TEST(LinkedList, Test4) {
    SinglyLinkedList ithptr;
    ithptr.push_back(1);
    ithptr.push_back(2);
    ithptr.push_back(3);

    EXPECT_EQ(1,ithptr.GetIthPointer(0)->val);
    EXPECT_EQ(2,ithptr.GetIthPointer(1)->val);
    EXPECT_EQ(3,ithptr.GetIthPointer(2)->val);
}


TEST(LinkedList, Test5) {
    SinglyLinkedList erase;

    erase.push_back(7);
    erase.push_back(6);
    erase.push_back(5);
    erase.push_back(4);

    EXPECT_EQ(6,erase.erase(2)->val);
}
