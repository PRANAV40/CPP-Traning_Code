#pragma once
#include<iostream>
using namespace std;

class BaseClass {
public:
    int var_base = 34;
    //Early Binding(compile - time time polymorphism)
    /*void display() {
        cout << "1 Displaying the value of base class variable var_base " << var_base << endl;
    }*/
    //Late Binding : (Run time polymorphism)
    void display() {
        cout << "1 Displaying the value of base class variable var_base " << var_base << endl;
    }
};
class derivedClass : public BaseClass {
public:
    int var_derived = 21;
    void display();

};

