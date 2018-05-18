#include<gtest/gtest.h>





TEST(pushTest,push_test_1)
{
    push(1);
    EXPECT_EQ(STACK[TOP],1);
}

TEST(pushTest,push_test_2)
{
    push(1);
    push(2);
    EXPECT_EQ(STACK[TOP],2);
}
