#pragma once
#include<iostream>
using namespace std;

class assignmentOper
{
	int english, maths;
	int num;
public:
	assignmentOper(int e, int m);
	void operator =(const assignmentOper& objAssig);
	void operator +=(const assignmentOper& objAssig);
	void operator -=(const assignmentOper& objAssig);
	void operator *=(const assignmentOper& objAssig);
	void operator /=(const assignmentOper& objAssig);
	void printMarks();
};

