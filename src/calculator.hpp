#include <stdlib.h>
#define MAX 1000
using namespace std;

int result;
int TOP;
int STACK[MAX];

// Function: Addition
// Adds two integers and returns the result.
int addition(int a,int b){
    result=a+b;
    return result;
}

// Function: Subtraction
// Subtracts two integers and returns the result.
int subtraction(int a,int b){
    result=a-b;
    return result;
}

// Function: Multiply
// Multiplies two integers and returns the result.
int multiplication(int a,int b){
    result=a*b;
    return result;
}

// Function: Division
// Divides two integers and returns the result.
int division(int a,int b){
    result=a/b;
    return result;
}
 
// Function: initStack
// Initialises a stack. 
void initStack(){
    TOP=-1;
}

// Function: isEmpty
// Checks whether the stack is empty!
int isEmpty(){
    if(TOP==-1)
        return 1;
    else
        return 0;
}

// Function: isFull
// Checks whether the stack is Full! 
int isFull(){
    if(TOP==MAX-1)
        return 1;
    else   
        return 0;
}
 
// Function: push
// Pushes the data in the stack
void push(int num){
    if(isFull()){
        cout<<"STACK is FULL."<<endl;
        return; 
    }
    ++TOP;
    STACK[TOP]=num;
}

// Function: display
// Displays the status of calculator
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


// Function: calculation
// Calculation part takes place here
void calculation(int firstNumber, char operat, int secondNumber)
{
    int output;
    if(operat =='+'){
        output=addition(firstNumber,secondNumber);
    }
    else if(operat == '-'){
        output=subtraction(firstNumber,secondNumber);
    }
    else if(operat == '*'){
        output=multiplication(firstNumber,secondNumber);
    }
   else if(operat == '/'){
        output=division(firstNumber,secondNumber);
    }
    else if(operat == 'c'){
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
    
}

// Function: input
// It takes Input from the user
void input()
{
    initStack();
    int firstNumber, secondNumber;
    char operat;
    cout << "Instructions:\n\nPress + to add\nPress - to subtract\nPress * to multiply\nPress / to divide\nPress c to clear\nPress m to save\n " ;
    cin >> firstNumber >> operat >>secondNumber;
    
    calculation(firstNumber,operat,secondNumber);

}

