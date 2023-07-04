#include<iostream>
using namespace std;

class Y;

class X{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
        friend void add(X,Y);
};
class Y{
    int data;
    public:
        void setValue(int values){
            data = values;
        }
        friend void add(X,Y);
};
void add(X o1, Y o2){
    cout<<"The summing of two numbers is "<<o1.num + o2.data;
}
int main(){
    
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(15);

    add(a1, b1);
    return 0;
}