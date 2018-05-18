
#include<gtest/gtest.h>


//functions func;

TEST(division,dividing_Positive_numbers)
{
    EXPECT_EQ(func.division(10,2),5); 
}

TEST(division,dividing_Negative_numbers)
{
    EXPECT_EQ(func.division(10,-2),-5); 
}

TEST(division,When_Denominator_is_Zero)
{
    EXPECT_EQ(func.division(5,0),-1);   
}

TEST(division,When_Neumerator_is_Zero)
{
    EXPECT_EQ(func.division(0,5),0);   
}



TEST(division,computing_with_Extra_Large_Number)
{
    EXPECT_EQ(func.division(100000000,0.001),100000000000);   
}
