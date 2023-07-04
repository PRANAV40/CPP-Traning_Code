/* ************Friend Function************
Properties of Friend Function
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/
#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    void setNumbetr(int n1, int n2){
        a = n1;
        b = n2;
    }
    friend Complex sumComplex(Complex o1, Complex o2);     //Friend function declaration 
    void printNumber(){
        cout<<"Your number is "<<a <<" + "<<b<<" i "<<endl; 
    }
};
Complex sumComplex(Complex o1, Complex o2){           //Access the private data of Complex class using friend function
    Complex o3;
    o3.setNumbetr((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}
int main(){
    Complex c1,c2,sum;
    c1.setNumbetr(1, 4);
    c1.printNumber();

    c2.setNumbetr(5, 8);
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();
    return 0;
}