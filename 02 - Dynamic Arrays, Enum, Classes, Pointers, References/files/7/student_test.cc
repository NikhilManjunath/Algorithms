#include <iostream>
#include <vector>

#include "gtest/gtest.h"
#include "q.h"
// Write several test cases for each function.
//-----------------------------------------------------------------------------
TEST(SwapByPointer, test1) {
    CPPLib pointer;
    float a = 3, b = 5;
    pointer.SwapByPointer(&a,&b);
    EXPECT_EQ(a,5);
    EXPECT_EQ(b,3);

    float c = 7, d = -21;
    pointer.SwapByPointer(&c,&d);
    EXPECT_EQ(c,-21);
    EXPECT_EQ(d,7);
}
//-----------------------------------------------------------------------------

TEST(SwapByReference, test2) {
    CPPLib reference;
    float a = 3, b = 5;
    reference.SwapByReference(a,b);
    EXPECT_EQ(a,5);
    EXPECT_EQ(b,3);

    float c = 7, d = -21;
    reference.SwapByReference(c,d);
    EXPECT_EQ(c,-21);
    EXPECT_EQ(d,7);
}
//-----------------------------------------------------------------------------
