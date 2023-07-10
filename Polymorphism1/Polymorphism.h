#pragma once
#include<iostream>
using namespace std;

class School {
public:
	virtual void showData() = 0;         //Pure virtual function
};
//Compile Time polymorphism and we also call function overloading
class Student : public School
{
protected:
	int b = 3;
private:
	int* rollNo;   
	string name;
	int num = 4;
public:
	int d = 5;
	Student();
	Student(int rollNos, string name);
	Student(const Student& objstudent);			//copy constructor
	Student& operator=(const Student& t);		//Operator overloading
	void operator++(int);		//Operator overloading
	virtual ~Student();
	void subMarks(int hindi,int english);		//Function Overloading
	void subMarks(float maths,int science);
	void subMarks(float art,float cs);
	string subMarks(string s1, string s2);
	void updateStud();
	void display();
	virtual void showDetails();
	void showData();

//Public, Private and Protected Inheritance and member function
	int getPrivate()
	{
		return num;
	}
};

class Exam : protected Student   
{
public:
	Exam();
	void showDetails();
	~Exam();
	void showData();

//Public, Private and Protected Inheritance data member and member function
public:
	int getPublic() 
	{
		return d;
	}
	int getProtected()
	{
		return b;
	}
};