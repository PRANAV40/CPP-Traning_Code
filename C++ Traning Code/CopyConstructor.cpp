//**************Copy Constructor Called**************
#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a = 0;
        }
        Number(int num){
            a = num;
        }
        //When no Copy Constructor is found, compiler alocate its own Copy Constructor
        //Copy Constructor 
        Number(Number &obj){
            cout<<"Copy Constructor Called!!!!!!!"<<endl;
            a = obj.a;
        }
        void display(){   //Methods 
            cout<<"The number for this object is "<<a<<endl;
        }
};
int main(){
    Number x,y,z(45),z2;

    x.display();
    y.display();
    z.display();

    Number z1(x);    //Copy Constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();
    return 0;
}