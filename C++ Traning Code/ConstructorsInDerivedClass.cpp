/* Constructors in Derived Class
Case1: 
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
#include<iostream>
using namespace std;

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"The Base1 Constructor is called "<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"The Base2 Constructor is called "<<endl;
        }
        void printDataBase2(void){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};
class Derived : public Base1, public Base2{
    int derived1,derived2;
    public:
        Derived(int a, int b, int c,int d): Base1(a),Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor is called "<<endl;
        }
        void printDataDerived(void){
            cout<< "The value of derived1 is "<< derived1 << endl;
            cout<< "The value of derived2 is "<< derived2 << endl;
        }
};
int main(){
    Derived dr(4,5,6,7);
    dr.printDataBase1();
    dr.printDataBase2();
    dr.printDataDerived();
    return 0;
}
