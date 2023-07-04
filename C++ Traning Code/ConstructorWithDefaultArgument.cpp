//***************Constructor with Default Arguments*************
#include<iostream>
using namespace std;

class Simple{
    int data1,data2;
    public:
        Simple(int a, int b =8){   //Constructor with Default Arguments
            data1 = a;
            data2 = b;
        }
        void printData();
};
void Simple :: printData(){
    cout<<"The value of data1 is "<<data1<<" and data2 is "<<data2<<endl;
}
int main(){
    Simple s(2,4);
    s.printData();

    Simple s1(2);
    s1.printData();

    
    return 0;
}