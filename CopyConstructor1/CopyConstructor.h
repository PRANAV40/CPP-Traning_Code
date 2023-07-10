#pragma once
#include<iostream>
#include "string.h"
using namespace std;

//Base class 1
class Student 
{
	int* rollNo;    //Dynamically allocated memory.
	string name;
	int noOfSubject;     //How many subject student take
	float* subMarks;       //  60, 70,66, 70
	char* result;
public:
	int var_base;
	Student();
	Student(int rollNos, string name);
	Student(const Student& objstudent);    
	Student& operator=(const Student& t);	
	~Student();
	char* getValue();
	Student(const char* str);
	Student(int subjects);
	void setValue(int subjects, float mark);
	float getValue(int subjects);
	void updateStud();
	void display();
	void showValue();
};

//Single Level Inheritance
class Exam : public  Student    //virtual
{
	int marksOfSub1;
	float marksOfSub2;
public:
	int var_derived;
	Exam();
	Exam(int marksOfSub1);
	void showMarks(float marks);
	void showResult();
	~Exam();
	void showValue();
};

//Multilevel Inheritance
class leftExam : public Exam
{
	int noOfStd;
public:
	void examLeft(int std);
	void showleftStd();
};

//Base class 2
class noOfStud  {  //: virtual public Student  //:public Student
	int noOfStudent;
public:
	void studentInclass(int noOfstudents);
	void showNoOfStudent();
};

//Multiple Inheritance
class positionInClass : public Student,public noOfStud   //public Exam
{
	int classRank;
public:
	void classPosition(int position);
	void showPosition();
};

//Hybrid Inheritance								//Multipath inheritance
class noOfFailStud : public Exam , public noOfStud  //public Exam, public left //public Student, public noOfStud  
{
	int noOfFailStudent;
public:
	void noOfFailStudentfun(int noOfFailStudents);
	void showNoOfFailStud();
};

//Hierarchical Inheritance
class eachStudent : public Student {
};

class favStudent : public Student {
};