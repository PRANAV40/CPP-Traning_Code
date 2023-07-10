#pragma once
#include<iostream>
using namespace std;

//This is a example of member friend function
class baseClass;		// forward definition needed
class anotherClass
{
public:
	void memberFunction(baseClass& objAnother);
};

class baseClass
{
	int private_variable;
protected:
	int protected_variable;
public:
	baseClass()
	{
		private_variable = 10;
		protected_variable = 111;
	}
	friend void anotherClass::memberFunction(baseClass& objAnother);
};
void anotherClass::memberFunction(baseClass& objAnother)
{
		cout << "Private Variable: " << objAnother.private_variable
			<< endl;
		cout << "Protected Variable: " << objAnother.protected_variable << endl;
}