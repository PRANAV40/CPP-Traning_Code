#pragma once
#include<iostream>
using namespace std;

//In this program we can work on Two program First one is Polymorphism and Second is Friend Function
class Friends
{
	int id;
	string Ename;
public:
	void setData(int ids);
	int getData();
	void setDataS(string Enames);
	void getDataS();
	void findData(int id, string Enames);
	void display();
	friend Friends friendFunc(Friends o1, Friends o2);

};

