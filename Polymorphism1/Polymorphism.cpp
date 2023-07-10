#include "Polymorphism.h"

Student::Student() //Default Constructor Difinition
{
	cout << "Base class default constructor" << endl;
	rollNo = new int;		//Dynamically allocated memory.
	*rollNo = 0;
	name = " ";
}

Student::Student(int rollNos, string names)
{
	rollNo = new int;
	*rollNo = rollNos;		//Dynamically allocated memory.
	name = names;
}

Student::Student(const Student& objstudent)
{
	cout << "Copy constructor called " << endl;
	rollNo = new int;		//Dynamically allocated memory.
	*rollNo = *(objstudent.rollNo);
	name = objstudent.name;
}

Student& Student:: operator=(const Student& t)
{
	cout << "Operator overloading called " << endl;
	rollNo = new int;		//Dynamically allocated memory.
	*rollNo = *(t.rollNo);
	name = t.name;
	return *this;			//return the current class object.
}

void Student:: operator++(int)
{
	cout << "Increment Operator overloading called " << endl;
	num = num + 1;	
}

Student::~Student() {
	cout << "Base class destructor " << endl;
	delete rollNo;
	cout << "RollNo is free" << endl;
}

void Student::subMarks(int hindi, int english) {
	int addSubMarks = hindi + english;
	cout << "The marks of hindi " << hindi << " and english " << english << " is : " << addSubMarks << endl;
}

void Student::subMarks(float maths, int science) {
	float addSubMarks = maths + science;
	cout << "The marks of maths " << maths << " and science " << science <<" is : " << addSubMarks << endl;
}

void Student::subMarks(float art, float cs) {
	float addSubMarks = art + cs;
	cout << "The marks of art " << art << " and cs " << cs <<" is: " << addSubMarks << endl;
}
string Student::subMarks(string s1, string s2)
{
	return s1 + s2;
}

void Student::updateStud()
{
	*rollNo = *rollNo + 1;
	name = "Raj";
}

void Student::display()
{
	cout << "The roll No of student is "
		<< *rollNo << " , the name of student is "
		<< name << endl;
}

void Student::showDetails()
{
	cout << " Base class function is called " << endl;
}

void Student::showData() {
	cout << "This is a member function of Pure virtual function in Student class " << endl;
}

Exam::Exam() {
	cout << "Derived class Default constructor" << endl;
}
void Exam::showDetails() {
	cout << "Derived class function called " << endl;
}

Exam :: ~Exam() {
	cout << "Derived class destreuctor" << endl;
}

void Exam::showData() {
	cout << "This is a member function of pure virtual function in Exam class" << endl;
}