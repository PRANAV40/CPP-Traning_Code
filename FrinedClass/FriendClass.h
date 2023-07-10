#pragma once
#include<iostream>
using namespace std;

class baseFriendClass
{
	int private_variable;
protected:
	int protected_variable;
public:
	baseFriendClass() 
	{
		private_variable = 12;
		protected_variable = 120;
	}
	friend class derivedFriendClass;
};

class derivedFriendClass
{
public:
	void display(baseFriendClass& objFriendClass);
};