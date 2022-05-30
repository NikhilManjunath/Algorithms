#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------
TEST(MyVector, Test1) 
{
    Queue q;
    q.Enqueue(1);
    q.Enqueue(12);
    q.Enqueue(123);

    EXPECT_EQ(q.Front(),1);
}

TEST(MyVector, Test2) 
{
    Queue q;
    q.Enqueue(1);
    q.Enqueue(12);
    q.Enqueue(123);

    Queue q2 = q;
    EXPECT_EQ(q2.Front(),1);

    q.Dequeue();
    q.Dequeue();
    q.Dequeue();

    EXPECT_EQ(q.IsEmpty(),true);
}

