#pragma once
#include<iostream>
#include<string>
using namespace std;

class Base {
	int data;    //Data member
public:
	//Base(){}     //Default constructor
	//Base(int num) {};    //Parameterised constructor
	//~Base(){}           //Destructor
	//Base(Base& n1){}    //Copy Constructor
	friend Base friendFunc(Base o1);
	void functionS(int num);   //Member function with Formal Parameter
	void display();
};
