#pragma once
#include<iostream>
using namespace std;

class ShallowAndDeep
{
	int a;
	//int* p;
public:
	ShallowAndDeep();
	ShallowAndDeep(int x);    //, int y
	ShallowAndDeep(const ShallowAndDeep& objDeep);
	void update();
	void display();
};

