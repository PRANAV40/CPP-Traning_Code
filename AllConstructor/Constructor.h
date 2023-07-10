#pragma once
#include<iostream>
using namespace std;

class student {
	student() {
		cout << "Student " << endl;
	}
};
class simple {
public:
	simple() {
		cout << "Simple constructor" << endl;
	}
};

class Complex
{
	student obj;
	simple obj;

	int num1;     //Member Variable
	int num2;
public:
	Complex();//Declaretion the default constructor
	Complex(int a, int b);   //Decalaretion the parameterised constructor
	void display();		//Decalaretion the function
};