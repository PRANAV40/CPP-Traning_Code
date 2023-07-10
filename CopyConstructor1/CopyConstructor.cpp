#include "CopyConstructor.h"

//Student class difinition
Student::Student() //Default Constructor Difinition
{
	cout << "The student is pass with good marks and the fav student is Raj" << endl;
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
	cout << "Assignment operator called " << endl;
	rollNo = new int;		//Dynamically allocated memory.
	*rollNo = *(t.rollNo);
	name = t.name;
	return *this;			//return the current class object.
}

Student::~Student() {
	delete rollNo;
	cout << "RollNo is free" << endl;	
	delete[] result;
	cout << "Result is free" << endl;
	delete[] subMarks;
	cout << "Float is free"  <<  endl;
}

char* Student::getValue() {
	return result;
}

Student::Student(const char* str) {
	rollNo = new int;		//Dynamically allocated memory.
	*rollNo = 0;
	name = "....";
	int noOfSubjects = strlen(str) + 1;
	result = new char[noOfSubjects];
	strcpy(result, str);
}

Student::Student(int subjects)
{
	rollNo = new int;		//Dynamically allocated memory.
	*rollNo = 0;
	name = "....";
	noOfSubject = subjects;
	cout << "Total 5 Student get the marks in one subject " << noOfSubject << endl;
	subMarks = new float[noOfSubject];
}

void Student::setValue(int index, float value)
{
	if (index >= 0 && index < noOfSubject)
	{
		subMarks[index] = value;
	}
}

float Student::getValue(int index)
{
	if (index >= 0 && index < noOfSubject)
	{
		return subMarks[index];
	}
	return 0.0f; // Return a default value if index is out of bounds
}

void Student::updateStud()
{
	*rollNo = *rollNo + 1;
	name = "Raj";
	noOfSubject = noOfSubject + 1;
}

void Student::display()
{
	cout << "The roll No of student is "
		<< *rollNo << " , the name of student is "
		<< name << endl;
}

void Student::showValue() {
	cout << "Displaying Student class "
		<< " variable var_base: " << var_base << endl;
}

//Exam class difinition
//Single Inheritance
Exam::Exam() {
	cout << "The exam is starting in few days" << endl;
}
						      //constructor initializer list
Exam :: Exam(int marksOfSub) : Student(marksOfSub) //For accessing the Base class Parameterized Constructor
{											  //we write the Class_name(pass_the_argument_of derived class)
	marksOfSub1 = marksOfSub;
	cout << "The student get the marks in Exam in one subject " << marksOfSub1 << endl;
}

void Exam::showMarks(float marks) {
	marksOfSub2 = marks;
}

void Exam::showResult() {
	cout << "Total marks gain by student is: " << marksOfSub2 << endl;
}

Exam::~Exam() {
	cout << "Destructor of Exam class" << endl;
}

void Exam:: showValue() {
	cout << "Displaying Student class "
		 << "variable var_base: " << var_base << endl;
	cout << "Displaying Exam "
		 << " class variable var_derived: "
		 << var_derived << endl;
}

//LeftExam Class Difinetion
//Multilevel Inheritance
void leftExam::examLeft(int std) {
	noOfStd = std;
}

void leftExam:: showleftStd() {
	cout << "Number of student left the exam: " << noOfStd << endl;
}

//PositionInClass Class Difinetion
//Multiple Inheritance
void positionInClass :: classPosition(int position) {
	classRank = position;
}

void positionInClass :: showPosition() {
	cout << "The position of student is " << classRank << endl;
}

//Number of student class difinition
void noOfStud::studentInclass(int noOfstudents) {
	noOfStudent = noOfstudents;
}

void noOfStud::showNoOfStudent() {
	cout << " Total student in a class is " << noOfStudent << endl;
}

//No of Fail Student class definition
//Hybrid Inheritance
void noOfFailStud::noOfFailStudentfun(int noOfFailStudents) {
	noOfFailStudent = noOfFailStudents;
}

void noOfFailStud::showNoOfFailStud() {
	cout << "The total fail student in class " << noOfFailStudent << endl;
}
