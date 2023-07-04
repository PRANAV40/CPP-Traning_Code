#include<iostream>
using namespace std;

class Base{
    int data1;   // private by default and is not inheritable
    public:
        int data2;
        void setData();  //methods dicleration
        int getData1();  //methods dicleration
        int getData2();  //methods dicleration
};
void Base :: setData(void){   //methods diffinition
    data1 = 10;
    data2 = 20;
}
int Base :: getData1(){     //methods diffinition
    return data1;
}
int Base :: getData2(){     //methods diffinition
    return data2;
}
class Derived : public Base{   // Class is being derived publically
    int data3;
    public:
        void process();
        void display();
};
void Derived :: process(){
    data3 = data2 * getData1(); 
}
void Derived :: display(){
    cout<<"Value of data 1 is "<< getData1() <<endl;
    cout<<"Value of data 2 is "<< data2 <<endl;
    cout<<"Value of data 3 is "<< data3 <<endl;
}
int main(){
    Derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}