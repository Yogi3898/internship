#include <stdlib.h>
#define MAX 1000
using namespace std;

int functionResult;
int TOP;
int STACK[MAX];

class functions{
    public:
/*Function: addition
    Add two integers
  Parameters : 
    a - The first integer
    b - The second integer
  Return :
    Gives the addition of two numbers
*/ 

int addition(int a,int b){
//    functionResult=a+b;
    return a+b;
}

/*Function: subtraction
    Subtracts two integers
  Parameters : 
    a - The first integer
    b - The second integer
  Return :
    Gives the substraction of two numbers
*/

int subtraction(int a,int b){
    functionResult=a-b;
    return functionResult;
}

/*Function: multiplication
    Multiplies two integers
  Parameters : 
    a - The first integer
    b - The second integer
  Return :
    Gives the product of two numbers
*/

int multiplication(int a,int b){
    functionResult=a*b;
    return functionResult;
}

/*Function: division
    Divide two integers
  Parameters : 
    a - The first integer
    b - The second integer
  Return :
    Gives the division of two numbers
*/

int division(int a,int b){
    functionResult=a/b;
    return functionResult;
}

};
 
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


/* Function: calculation
   Handels the calculation part.
   Parameters:
      firstNumber - The first integer.
      operat - The Operator
      secondNumber - The second integer.
   Returns:
      The final result of the calculation.
*/

functions func;
int choose(int firstNumber, char operat, int secondNumber)
{
    int output;
    if(operat =='+'){
        output=func.addition(firstNumber,secondNumber);
    }
    else if(operat == '-'){
        output=func.subtraction(firstNumber,secondNumber);
    }
    else if(operat == '*'){
        output=func.multiplication(firstNumber,secondNumber);
    }
   else if(operat == '/'){
        output=func.division(firstNumber,secondNumber);
    }
    else if(operat == 'c'){
        exit(0);
    }
    

return output;

    
}

// Function: input
// It takes Input from the user
void input()
{
    initStack();
    int firstNumber, secondNumber;
    char operat;
    int output;
    cout << "Instructions:\n\nPress + to add\nPress - to subtract\nPress * to multiply\nPress / to divide\nPress c to clear\nPress m to save\n " ;
    cin >> firstNumber >> operat >>secondNumber;
    
    output = choose(firstNumber,operat,secondNumber);
    
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
            output=func.addition(output,number);
        }
        
        else if(operat == '-'){
            cin >> number;
            output=func.subtraction(output,number);
        }
        else if(operat == '*'){
            cin >> number;
            output=func.multiplication(output,number);
        }
        else if(operat == '/'){
            cin >> number;
            output=func.division(output,number);
        }
        else if(operat == 'm'){
            push(output);
        }
        
       cout<<output;
   }


}