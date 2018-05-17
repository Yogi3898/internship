#include <iostream>
#include<gtest/gtest.h>
#include "calculator.hpp"

TEST(Addition,adding_Positive_numbers)
{
    //Arrange
    int a = 5,b = 6;
    int output;
    //act
    output = addition(a,b);
    //assert
    ASSERT_EQ(output,11);
    
}

TEST(Addition,adding_Negative_numbers)
{
    //Arrange
    int a = 5,b = -6;
    int output;
    //act
    output = addition(a,b);
    //assert
    ASSERT_EQ(output,-1);
    
}

TEST(Addition,adding_zero_to_a_Number)
{
    //Arrange
    int a = 5,b = 0;
    int output;
    //act
    output = addition(a,b);
    //assert
    ASSERT_EQ(output,a);
    
}


int main(int argc,char** argv)
{
    testing:: InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}