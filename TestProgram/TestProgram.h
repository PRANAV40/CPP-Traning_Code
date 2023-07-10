#pragma once
#include<iostream>
using namespace std;

class MyClass {
    int* mark;
    float number;
public:
    /*MyClass(int marks, float num) {
        mark = new int;
        *mark = marks;
        number = num;
    }
    ~MyClass() {
        //delete mark;
        cout << "Destructor" << endl;
        //display();
    }
    
    void display() {
        cout << "The marks is " << *mark <<   endl;
    }*/
    virtual ~MyClass() = 0;
};
class Student :public MyClass {
public:
    ~Student() {
        cout << "~Derived() is executed\n";
    }
};











/*
//This is program of operator overloading
class Complex {
	int real, imag;
public:
	Complex(){}
	Complex(int r, int i) {
		real = r;
		imag = i;
	}
	Complex operator + (Complex obj);
	void display();
};*/