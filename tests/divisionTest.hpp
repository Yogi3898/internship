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
    int result=func.division(8,0);
    EXPECT_ANY_THROW("Not defined");
}


TEST(division,computing_with_Extra_Large_Number)
{
    EXPECT_EQ(func.division(100000000000,1),100000000000);   
}
