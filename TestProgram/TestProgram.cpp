#include "TestProgram.h"

MyClass::~MyClass() {
	std::cout << "Pure virtual destructor is called";
}
int main()
{
	MyClass* obj = new Student();
	delete obj;
   /*MyClass obj1(87, 78.56);
    obj1.display();
    obj1.~MyClass();    
    obj1.display();*/
}













/*Complex Complex:: operator + (Complex  obj) {
	Complex res;
	res.imag = imag + obj.imag;
	res.real = real + obj.real;
	return res;
}
void Complex:: display() {
	cout << real << " + " << imag << "i" << endl;
}

int main() {
	Complex c1(23, 12);
	Complex c2(10, 2);
	Complex c3 = c1 + c2;
	c3.display();
	Complex c4 = c1.operator+(c2);;
	c4.display();
	c4 = c1 + c2;
	c4.display();
	return 0;
}*/