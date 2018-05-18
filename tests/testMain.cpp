#include<iostream>
#include<stdio.h>
#include "calculator.hpp"
#include "additionTest.hpp"
#include "subtractionTest.hpp"
#include "multiplicationTest.hpp"
#include "divisionTest.hpp"
#include "pushTest.hpp"
#include "chooseTest.hpp"










int main(int argc,char** argv)
{
    freopen ("output.txt","w",stdout);
    testing:: InitGoogleTest(&argc,argv);
    
    
    int result =  RUN_ALL_TESTS();
    fclose(stdout);
    return result;
}