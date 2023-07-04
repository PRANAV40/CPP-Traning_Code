//**************Initialization list in Constructors************
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
#include<iostream>
using namespace std;

class Test{
    int a,b;
    public:
        // Test(int i,int j): a(i),b(j)
        // Test(int i,int j): a(i),b(i+j)
        Test(int i,int j): a(i),b(a+j)
        {
            cout<<"Constructor executed"<<endl;
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
        }

};
int main(){
    Test t(6,8);
    return 0;
}