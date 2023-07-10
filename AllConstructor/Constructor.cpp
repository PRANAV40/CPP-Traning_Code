#include "Constructor.h"

Complex::Complex(){
	cout << "Complex constructor" << endl;
}/* {    //Difinition the default constructor
	num1 = 0;
	num2 = 0;
}*/
Complex::Complex(int a,int b) {   //Difinition the parameterised constructor
	num1 = a;
	num2 = b;
}
void Complex::display() {		//Difinition the function
		cout << "The value of " << num1 << " + " << num2 << "i" << endl;
}

int main() {
	
	Complex C1;       //Calling Default Constructor
	C1.display();

	Complex C2(3, 5);    //Calling Parameterised Constructor
	C2.display();

	return 0;
}
