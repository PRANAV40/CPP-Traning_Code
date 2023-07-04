/*Inheritance and Visibility Mode
Note:

1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class become private members of the derived class
4. Private members are never inherited

// Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
*/
#include<iostream>
using namespace std;

class Employee{
    public:
    int id;
    float salary;
        Employee(int inpId){
            id = inpId;
            salary  = 34569.5;
        }
        Employee(){}
};
// Creating a Programmer class derived from Employee Base class
class programmer : Employee{
    public:
    programmer(int inpId){
        id = inpId;
    }
    int languageCode = 9;
    void getData(){
        cout<<id<<endl;
    }
    
};
int main(){
    Employee Ritu(1),Hrash(2);
    cout<<Ritu.salary<<endl;
    cout<<Hrash.salary<<endl;
    programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    skillF.getData();
    return 0;
}