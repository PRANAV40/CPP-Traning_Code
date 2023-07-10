#include "Destructor.h"

Student::Student(int rollNos, string names, float marks) {
	rollNo = new int;
	*rollNo = rollNos;
	name = names;
	mark = marks;
}
Student::~Student() {
	cout << "Destructor Invoked" << endl;
	display();
}
void Student::update() {
	*rollNo = *rollNo + 1;
	name = "Rajesh";
	mark = mark + 1;
}
void Student::display() {
	cout << "Roll No of student is " 
		 << *rollNo << " , the name of student is " 
		 << name << " and marks is " << mark << endl;
}












/*Tree::Tree(int initialHeight)
{
	height = initialHeight;
}
Tree::~Tree() 
{
	cout << "Inside Tree destructor" << endl;
	printsize();
}
void Tree::grow(int years) 
{
	height += years;
}
void Tree::printsize() 
{
	cout << "Tree height is " << height <<" Feet "<< endl;
}*/