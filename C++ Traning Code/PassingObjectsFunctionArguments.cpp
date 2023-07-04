// **********************Passing Objects as Function Arguments*****************
#include<iostream>
using namespace std;

//Create a class name complex and taking the varialble a and b
class Complex{
    int a,b;
    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
        //We passing the object in this function
        void setDataBySum(Complex o1, Complex o2){   //Add the two complex number and it is complex arguments pass in the function
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main(){
    Complex c1,c2,c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}