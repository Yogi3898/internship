#include<gtest/gtest.h>
#include<gmock/gmock.h>


using namespace std;
using ::testing :: AtLeast;
using ::testing :: Return;
using ::testing ::_;

class Mockfunctions : public functions{
public:
    MOCK_METHOD2(addition, int(int firstNumber,int secondNumber));
    MOCK_METHOD2(subtraction, int(int firstNumber,int secondNumber));
    MOCK_METHOD2(multiplication, int(int firstNumber,int secondNumber));
    MOCK_METHOD2(division, int(int firstNumber,int secondNumber));
};


TEST(chooseTest,addition)
{
    Mockfunctions mf;
    /*
    EXPECT_CALL(mf, addition(8,3))
    .Times(1)
    .WillOnce(Return(c));
    */
    ON_CALL(mf,addition(2,3)).WillByDefault(Return(2+3));
    
    int retvalue=choose(2,'+',3);
    EXPECT_EQ(retvalue,5);
    
}

TEST(chooseTest,subtraction)
{
    Mockfunctions mf;
    ON_CALL(mf,subtraction(2,3)).WillByDefault(Return(2-3));
    
    int retvalue=choose(2,'-',3);
    EXPECT_EQ(retvalue,-1);
}

TEST(chooseTest,multiplication)
{
    Mockfunctions mf;
    ON_CALL(mf,multiplication(2,3)).WillByDefault(Return(2*3));
    
    int retvalue=choose(2,'*',3);
    EXPECT_EQ(retvalue,6);
}

TEST(chooseTest,division)
{
    Mockfunctions mf;
    ON_CALL(mf,division(6,3)).WillByDefault(Return(6/3));
    
    int retvalue=choose(6,'/',3);
    EXPECT_EQ(retvalue,2);
}
