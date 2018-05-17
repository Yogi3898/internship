#include <iostream>
#include<gtest/gtest.h>
#include "calculator.hpp"

TEST(Subtraction,subtracting_Positive_numbers)
{
    //Arrange
    int a = 5,b = 6;
    int output;
    //act
    output = subtraction(a,b);
    //assert
    ASSERT_EQ(output,-1);
    
}

TEST(subtraction,subtracting_Negative_numbers)
{
    //Arrange
    int a = 5,b = -6;
    int output;
    //act
    output = subtraction(a,b);
    //assert
    ASSERT_EQ(output,a-b);
    
}

TEST(Subtraction,subtracting_zero_from_a_Number)
{
    //Arrange
    int a = 5,b = 0;
    int output;
    //act
    output = subtraction(a,b);
    //assert
    ASSERT_EQ(output,a);
    
}


int main(int argc,char** argv)
{
    testing:: InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}