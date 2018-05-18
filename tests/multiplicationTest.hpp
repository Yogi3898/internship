#include<gtest/gtest.h>

TEST(multiplication,multipliying_Positive_numbers)
{
    EXPECT_EQ(func.multiplication(5,6),30); 
}

TEST(multiplication,multipliying_Negative_numbers)
{
    EXPECT_EQ(func.multiplication(5,-6),-30); 
}

TEST(multiplication,multipliying_zero_to_a_Number)
{
    EXPECT_EQ(func.multiplication(5,0),0);   
}



TEST(multiplication,computing_with_Extra_Large_Number)
{
    EXPECT_EQ(func.multiplication(100000,100000),10000000000);   
}




