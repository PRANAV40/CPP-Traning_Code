#include "CallbyReference.h"


//Call By Reference
void CallbyReference::swap(int &num1, int &num2) {      //Function Difinition with reference
	int temp = num1;    //Local Variable
	num1 = num2;
	num2 = temp;
	/*num1 = num2 + num1;
	num2 = num1 - num2;
	num1 = num1 - num2;*/
	cout << "The value of num1 is: " << num1 << " and the value of num2 is " << num2 << endl;
}

int main() {
	CallbyReference obj;
	int num1 = 34, num2 = 56;        //Instance variable
	//cout << "Before swap the value " << num1 << endl;
	//cout << "Before swap the value " << num2 << endl;
	obj.swap(num1, num2);
	cout << "After swap the value " << num1 << endl;
	cout << "After swap the value " << num2 << endl;
}