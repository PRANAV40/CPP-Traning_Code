#include<iostream>
using namespace std;

int main(){
    // Array Example 
    int marks[5] = {34,56,78,36,76};  //Initialization of array
    int mathMarks[5]; 
    mathMarks[0] = 67;
    mathMarks[1] = 76;
    mathMarks[2] = 87;
    mathMarks[3] = 97;
    mathMarks[4] = 57;

    cout<<"These are maths marks: "<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    cout<<mathMarks[4]<<endl;

    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    // change the value of Array using following method
    cout<<"Change the value in the Array"<<endl;
    marks[2] = 68;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

    // print the array using for loop 
    cout<<"Print the array using for loop"<<endl;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    // pointer to array
    cout<<"Pointer to Array"<<endl;
    int* p = marks;
    cout<<p<<endl;
    cout<<"The value of *p is "<<*p<<endl;           //Pointer dereference
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;   //Pointer dereference
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;   //Pointer dereference
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;   //Pointer dereference
    cout<<"The value of *(p+4) is "<<*(p+4)<<endl;   //Pointer dereference
    
    
    cout<<"This is another example of pointer to array"<<endl;
    cout<<*p<<endl;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    return 0;
}