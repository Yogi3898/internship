#include<iostream>
#include "calculator.hpp"
#include "additionTest.hpp"
#include "subtractionTest.hpp"
#include "multiplicationTest.hpp"
#include "divisionTest.hpp"
#include "pushTest.hpp"
#include "chooseTest.hpp"










int main(int argc,char** argv)
{
    testing:: InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}