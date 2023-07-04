#include<iostream>
using namespace std;

// This will not swap a and b
// Call by Value
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
//*****************Call By Reference************
//Call by Reference using pointer
void swapPointer(int* a, int* b){   //temp a b
    int temp = *a;                 //4  4  5
    *a = *b;                      //4  5  5
    *b = temp;                   //4  5  4
}
// Call by Reference using C++ reference variable
void swapReferenceVar(int &a, int &b){   //temp a b
    int temp = a;                 //4  4  5
    a = b;                      //4  5  5
    b = temp;                   //4  5  4
}
//Return Reference 
int & swapReferenceVari(int &a, int &b){   //temp a b
    int temp = a;                 //4  4  5
    a = b;                      //4  5  5
    b = temp;                   //4  5  4
    return a;
}


int main(){
    int x = 5, y = 7;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<" Before Swaping"<<endl;
    cout<<"Call By Value"<<endl;
    swap(x,y); // This is called Call by Value and This will not swap a and b
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    //It is called call by reference 
    cout<<"Call By Reference"<<endl;
    swapPointer(&x,&y);   // Give the reference of pointer and This will swap a and b using pointer reference
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    cout<<"Reference variables"<<endl;
    swapReferenceVar(x,y);    //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    cout<<"Return reference "<<endl;
    swapReferenceVari(x,y) = 34;       //Return Reference
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;  //Return Reference 

    return 0;
}