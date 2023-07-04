#include<iostream>
using namespace std;

int main(){
    //*********************Reference Variables***********
    float x=455;
    float &y = x;
    cout<<"The value of x is:"<<x<<endl;
    cout<<"The value of y(reference variable) is:"<<y<<endl;

    //*******************Typecasting**********************
    int a = 45;
    float b = 45.54;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;


    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;


    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    return 0;
}