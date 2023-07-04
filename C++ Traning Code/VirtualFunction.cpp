#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base = 34;
        virtual void display(){
            cout<<"1 Displaying base class variable var_base "<<var_base<<endl; 
        }
};
class derivedClass : public BaseClass{
    public:
        int var_derived = 21;
        void display(){
            cout<<"2 Displaying base class variable var_base "<<var_base<<endl; 
            cout<<"2 Displaying derived class variable var_derived "<<var_derived<<endl; 
        }
        
};
int main(){
    BaseClass * base_class_pointer = new derivedClass;
    //derivedClass obj_derived;

    //base_class_pointer = &obj_derived;
    base_class_pointer->display();

    return 0;
}