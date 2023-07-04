//****************Pointers to Derived Classes*******
#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying base class variable var_base "<<var_base<<endl; 
        }
};
class derivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying base class variable var_base "<<var_base<<endl; 
            cout<<"Displaying derived class variable var_derived "<<var_derived<<endl; 
        }
        
};
int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    derivedClass obj_derived;
    //base_class_pointer = &obj_derived; //Pointing base class pointer to derived class pointer

    base_class_pointer->var_base = 45;
    // base_class_pointer->var_derived = 415;     Will be show error
    base_class_pointer->display();
    return 0;
}