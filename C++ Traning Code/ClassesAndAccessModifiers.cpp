#include<iostream>
using namespace std;

    // This is show how to declare the class and access modifier in a program 
class Employee{
    private:
        int a, b, c;
    public:
        int d,e;
    void setData(int a1,int b1,int c1); //Function Declaretion 
    void getData(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
        cout<<"The value of d is: "<<d<<endl;
        cout<<"The value of e is: "<<e<<endl;
    }
};
void Employee :: setData(int a1, int b1, int c1){     //Function Definition
    a = a1;
    b = b1;
    c = c1;
}
int main(){
    Employee company;
    // company.a = 43;      ------> This will throw error because a is private
    company.d = 23;
    company.e = 77;
    company.setData(34,45,56);
    company.getData();
    return 0;
}