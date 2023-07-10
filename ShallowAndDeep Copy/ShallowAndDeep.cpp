#include "ShallowAndDeep.h"

ShallowAndDeep::ShallowAndDeep() {   //Default Constructor Difinition
	a = 0;
	//p = new int;
	//*p = 0;
}
ShallowAndDeep::ShallowAndDeep(int x) {		//Parameterised Constructor Difinition , int y
	a = x;
	//p = new int;
	//*p = y;
}
ShallowAndDeep::ShallowAndDeep(const ShallowAndDeep& objDeep) {
	//cout << "Copy constructor called " << endl;
	a = objDeep.a;
	//p = new int;
	//*p = *(objDeep.p);
}

void ShallowAndDeep:: update() {
	a = a + 1;
	//*p = *p + 1;
}
void ShallowAndDeep:: display() {
	cout << "The value of A is " << a  << endl;   //<< " and value *P is " << *p
}

int main() {
	//ShallowAndDeep objSh, objSh1;
	//objSh1 = objSh;			// assignment operator called , 
	//ShallowAndDeep objSh2 = objSh;	//copy constructor called,

	ShallowAndDeep objShallow(21);
	objShallow.display();
	ShallowAndDeep objShallow1 = objShallow;		//Copy Constructor called by compiler 
	objShallow1.display();

	objShallow.update();
	cout << "\nAfter value change - " << endl;
	cout << "The shallow copy is working here:" << endl;
	objShallow.display();
	objShallow1.display();
	
	cout << "The deep copy is working here:" << endl;
	objShallow1.display();
	return 0;
}







/*
* ShallowAndDeep& operator=(const ShallowAndDeep& t)
	{
		cout << "Assignment operator called " << endl;
		return *this;			//return the current class object.
	}
*/