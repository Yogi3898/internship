#include <iostream>
#include <stdlib.h>
#define MAX 1000
using namespace std;

int result;
int TOP;
int STACK[MAX];

int addition(int a,int b){
    result=a+b;
    return result;
}

int subtraction(int a,int b){
    result=a-b;
    return result;
}

int multiplication(int a,int b){
    result=a*b;
    return result;
}

int division(int a,int b){
    result=a/b;
    return result;
}
 
void initStack(){
    TOP=-1;
}

int isEmpty(){
    if(TOP==-1)
        return 1;
    else
        return 0;
}
 
int isFull(){
    if(TOP==MAX-1)
        return 1;
    else   
        return 0;
}
 
void push(int num){
    if(isFull()){
        cout<<"STACK is FULL."<<endl;
        return; 
    }
    ++TOP;
    STACK[TOP]=num;
}
 
void display(){
    int i;
    cout<<"Your memory is:";
    if(isEmpty()){
        cout<<"Nothing in memory"<<endl;
        return;
    }
    for(i=TOP;i>=0;i--){
        cout<<STACK[i]<<" ";
    }
    cout<<endl;
}
 
int main()
{
    initStack();
    int firstNumber, secondNumber, resultwer, output;
    char input;
    cout << "Instructions:\n\nPress + to add\nPress - to subtract\nPress * to multiply\nPress / to divide\nPress c to clear\nPress m to save\n " ;
    cin >> firstNumber >> input >>secondNumber;
    if(input =='+'){
        output=addition(firstNumber,secondNumber);
    }
    else if(input == '-'){
        output=subtraction(firstNumber,secondNumber);
    }
    else if(input == '*'){
        output=multiplication(firstNumber,secondNumber);
    }
   else if(input == '/'){
        output=division(firstNumber,secondNumber);
    }
    else if(input == 'c'){
        exit(0);
    }
    
    cout << output;
    
    for(;;){
        char operat;
        int number;
        cin >> operat;
        if(operat == 'c'){
            display();
            exit(0);
        }
        else if(operat == '+'){
            cin >> number;
            output=addition(output,number);
        }
        
        else if(operat == '-'){
            cin >> number;
            output=subtraction(output,number);
        }
        else if(operat == '*'){
            cin >> number;
            output=multiplication(output,number);
        }
        else if(operat == '/'){
            cin >> number;
            output=division(output,number);
        }
        else if(operat == 'm'){
            push(output);
        }
       cout<<output;
    }
    
    return 0;
}
