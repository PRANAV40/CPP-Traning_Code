//*************Ambiguity Resolution in Inheritance****************
#include<iostream>
using namespace std;
 //Ambiguity type 1
class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};
class Base2{
    public:
        void greet(){
            cout<<"Kaise ho?"<<endl;
        }
};
class Derived : public Base1,Base2{
    int a;
    public:
        void greet(){       //Ambigiuity Resolutions 
            Base1 :: greet();
        }
};
 //Ambiguity type 2 
class B{
    public:
        void say(){
            cout<<"Hello World!!"<<endl;
        }
};
class D : public B{
    public:
        void say(){
            cout<<"Hello my beautiful people"<<endl;
        }
};
int main(){

    //Ambiguity 1
    // Base1 b1;
    // Base2 b2;
    // b1.greet();
    // b2.greet();
    // Derived der;
    // der.greet();

    //Ambiguity 2
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}
