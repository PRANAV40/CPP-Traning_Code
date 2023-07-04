#include<iostream>
using namespace std;

//Function Prototype
// Syntax:- 
// type functiom-name (arguments);
// int sum(int a, int b);  //----> Acceptable
//int sum(int a, b);      //----> Not Acceptable
int sum(int , int );    //----> Acceptable    
// void greet(void);    //-----> Acceptable
void greet();
//Main function
int main(){
    int num1,num2;
    cout<<"Enter the 1st Number: ";
    cin>>num1;
    cout<<"Enter the 2nd Number: ";
    cin>>num2;
    // num1 and num2 are acutal parameter
    cout<<"The sum of two number is: "<<sum(num1,num2)<<endl;   //Actual parameter in function
    greet();
    return 0;
}
//Declare the function
int sum(int a, int b){      //Formal parameter in function
    // Formal parameters a and b will be taking values from actual parameter num1 and num2
    int c = a + b;
    return c;     //Return value function key
}
void greet(){
    cout<<"\nHello!, Good Evening.";
}