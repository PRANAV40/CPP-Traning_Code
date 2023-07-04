#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    //***************Constant************
    const int a = 56; 
    cout<<"The value of A is: "<<a<<endl;
    //a = 32; it shows error because it can't be changed 
    cout<<"The value of a is: "<<a<<endl;

    // **************Manipulators***************
    int a=23,b=456,c=1234,d=12456;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;
    cout<<"The value of d without setw is: "<<d<<endl;
    cout<<endl;
    cout<<"The value of a is: "<<setw(5)<<a<<endl;
    cout<<"The value of b is: "<<setw(5)<<b<<endl;
    cout<<"The value of c is: "<<setw(5)<<c<<endl;
    cout<<"The value of d is: "<<setw(5)<<d<<endl;

    //***************Operator Precedence***************
    int a = 4,b = 7;
    int c = ((((a*5)+b)-23)+45);
    cout<<"The value of c is: "<<c;
    return 0;
}