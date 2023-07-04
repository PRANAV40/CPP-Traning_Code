//*************Array of Objects & Passing Objects as Function Arguments**********
#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary = 1220;
            cout<<"Enter the Id of Employee: "<<endl;
            cin>>id;
        }
        void getId(void){
            cout<<"The id of the Employee is "<<id<<endl;
        }
};
int main(){
    // Employee e1,e2,e3,e4;
    // e1.setId();
    // e1.getId();
    Employee Parkar[5];     //Array of Objects
    for (int i = 0; i < 5; i++)
    {
    Parkar[i].setId();   
    Parkar[i].getId();
    }
    return 0;
}