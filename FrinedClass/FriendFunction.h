#pragma once
#include<iostream>
using namespace std;

//This is example of global friend function
class baseFriendFunc
{
	int private_variable;
protected:
	int protected_variable;
public:
	baseFriendFunc()
	{
		private_variable = 12;
		protected_variable = 120;
	}
	// friend function declaration
	friend void friendFunction(baseFriendFunc& objFriend);
};