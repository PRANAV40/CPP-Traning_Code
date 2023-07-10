#include "AssignmentOper.h"

assignmentOper::assignmentOper(int e, int m) {
	english = e;
	maths = m;
}
void assignmentOper:: operator =(const assignmentOper& objAssig) {
	english = objAssig.english;
	maths = objAssig.maths;
}
void assignmentOper::printMarks() {
	cout << "English: " << english << ", Math: " << maths << endl;
}

int main()
{
	assignmentOper objAssign(78,82),objAssign1(75,83);
	cout << "BEFORE OVERLOADING ASSIGNMENT OPERATOR" << endl;
	cout << "Student 1 marks : ";
	objAssign.printMarks();

	cout << "Student 2 marks : ";
	objAssign1.printMarks();
	cout << endl;

	//use assignment operator
	objAssign = objAssign1;

	cout << "AFTER OVERLOADING ASSIGNMENT OPERATOR" << endl;
	cout << "Student 1 marks : ";
	objAssign.printMarks();

	cout << "Student 2 marks : ";
	objAssign1.printMarks();

	//C++ program to demonstrate working of Assignment operators
	int a = 10;
	cout << "Value of a is " << a << "\n";

	// Assigning value by adding 10 to a
	// using "+=" operator
	a += 10;
	cout << "Value of a is " << a << "\n";

	// Assigning value by subtracting 10 from a
	// using "-=" operator
	a -= 10;
	cout << "Value of a is " << a << "\n";

	// Assigning value by multiplying 10 to a
	// using "*=" operator
	a *= 10;
	cout << "Value of a is " << a << "\n";

	// Assigning value by dividing 10 from a
	// using "/=" operator
	a /= 10;
	cout << "Value of a is " << a << "\n";

	a %= 10;
	cout << "Value of a is " << a << "\n";
	return 0;
}