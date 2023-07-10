#pragma once
#include<iostream>
using namespace std;

//Run time polymorphism
class Base {
public:
	virtual void print() {
		cout << "This is the base class print function" << endl;
	}
	virtual void display() {
		cout << "This is the base class display function" << endl;
	}
};
class Derived :public Base {
	void print();
	void display();
};





/*
int var_base_student = 34;
	virtual void func() {
		cout << "This is a function of base class: " << var_base_student << endl;
	}
	void func(int num, int num1);
	void func(float num, int num1);
	void func(float num, float num1);
	void func(float num, float num1, int num2);

//This class is for Polymorphism
class Exam : public Student {
public:
	int var_derived_Exam = 21;
	void func();
	//Exam();
	//~Exam();
};*/