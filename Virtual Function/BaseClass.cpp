#include "BaseClass.h"

void derivedClass::display() {
    cout << "2 Displaying the value of base class variable var_base " << var_base << endl;
    cout << "2 Displaying the value of derived class variable var_derived " << var_derived << endl;
}
int main() {
    
    BaseClass* base_class_pointer; // = new derivedClass;
    derivedClass obj_derived;
    // initialization of reference variable
    base_class_pointer = &obj_derived;
    base_class_pointer->display();      
    //If we use the function without virtual keyword It is called Early binding and if we use the function with 
    // virtual keyword It is called Late binding*/
    return 0;
}