#include "Runtime.h"

void Derived:: print() {
	cout << "This is the derived class print function" << endl;
}
void Derived::display() {
	cout << "This is the derived class display function" << endl;
}

int main() {
	Base *objBase;
	Derived objDerived;
	objBase = &objDerived;    

	objBase->print();
	objBase->display();

	return 0;
}







/*
void Exam::func() {
	cout << "This is a function base class " << var_base_student << endl;
	cout << "This is a function derived class " << var_derived_Exam << endl;
}

void Student::func(int num, int num1) {
	cout << "This is a function with two int arguments " << num << " " << num1 << endl;
}
void Student::func(float num, int num1) {
	cout << "This is a function with one float and one int arguments " << num << " " << num1 << endl;
}
void Student::func(float num, float num1) {
	cout << "This is a function with two float arguments is " << num << " " << num1 << endl;
}
void Student::func(float num, float num1, int num2) {
	cout << "This is a function with two float is " << num << ", " << num1 << " and one int arguments is " << num2 << endl;
}


int main()
{
//Function Overloading
	cout << "Function Overloading" << endl;
	Student objNum;
	objNum.func(34, 21);
	objNum.func(23.12f, 34);
	objNum.func(23.12f, 34.32f);
	objNum.func(23.12f, 34, 45);
	cout << endl;

	//Run Time Polymorphism
	cout << "Run Time Polymorphism "<< endl;

	Student* base_class_pointer1;
	Exam obj_derived1;
	// initialization of reference variable
	base_class_pointer1 = &obj_derived1;
	base_class_pointer1->func();
	cout << endl;
}
*/
