#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
	char* result;
	float* marks;
	int noOfSubject;

public:
	Student(const char* str);
	~Student();
	const char* getValue() const;
	Student(int n);
	void setValue(int index, float value);
	float getValue(int index);
};

