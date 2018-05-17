#include <iostream>
#include<gtest/gtest.h>
#include "calculator.hpp"




TEST(stackTest,push_test)
{
    push(1);
    push(2);
    EXPECT_EQ(STACK[TOP],2);
}

TEST(stackTest,sizeValidityTest)
{
    
}









int main(int argc,char** argv)
{
    testing:: InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}