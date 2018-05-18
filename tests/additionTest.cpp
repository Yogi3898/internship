#include <iostream>
#include<gtest/gtest.h>
#include "calculator.hpp"

TEST(Addition,adding_Positive_numbers)
{
    EXPECT_EQ(func.addition(5,6),11); 
}

TEST(Addition,adding_Negative_numbers)
{
    EXPECT_EQ(func.addition(5,-6),-1); 
}

TEST(Addition,adding_zero_to_a_Number)
{
    EXPECT_EQ(func.addition(5,0),5);   
}



TEST(Addition,computing_with_Extra_Large_Number)
{
    EXPECT_EQ(func.addition(2500000000,2700000000),5200000000);   
}




int main(int argc,char** argv)
{
    testing:: InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}