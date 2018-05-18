#include <iostream>
#include<gtest/gtest.h>
#include "calculator.hpp"

TEST(subtraction,subtracting_Positive_numbers)
{
    EXPECT_EQ(func.subtraction(5,6),-1); 
}

TEST(subtraction,subtracting_Negative_numbers)
{
    EXPECT_EQ(func.subtraction(5,-6),11); 
}

TEST(subtraction,subtracting_zero_to_a_Number)
{
    EXPECT_EQ(func.subtraction(5,0),5);   
}



TEST(subtraction,computing_with_Extra_Large_Number)
{
    EXPECT_EQ(func.subtraction(2500000000,-2700000000),5200000000);   
}

int main(int argc,char** argv)
{
    testing:: InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}