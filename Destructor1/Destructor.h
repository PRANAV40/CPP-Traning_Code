#include<iostream>
using namespace std;

class Student
{
	int* rollNo;
	string name;
	float mark;
public:
	Student(int rollNos,string names, float marks);
	~Student();
	void update();
	void display();
};