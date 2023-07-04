//**************Constructor Overloading****************
#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        Complex(){       //Default Constructor
            a = 0;
            b = 0;
        }
        Complex(int x, int y){      //Parameterized constructor
            a = x;
            b = y; 
        }
        Complex(int x){    //Parameterized constructor
            a = x;
            b = 0;
        }
        void printNumber(){
            cout<<"The value of "<<a <<" + "<<b<<"i"<<endl;
        }
};
int main(){
    Complex  c1(3,5);
    c1.printNumber();

    Complex c2(6);
    c2.printNumber();
    return 0;
}