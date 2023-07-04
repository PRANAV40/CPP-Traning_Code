// C++ program demonstrating ambiguity in Multipath Inheritance
#include <iostream>
using namespace std;

class ClassA {
public:
	int a;
};
//If we remove the virtual keyword from here then ambiguity occur for solvinmg ambiguity we can do with two mwthods 
//1st one is Avoiding ambiguity using the virtual base class:
//2nd one is Avoiding ambiguity using the scope resolution operator:
class ClassB : virtual public ClassA {  // Avoiding ambiguity using the virtual base class:
public:
	int b;
};

class ClassC : virtual public ClassA {  // Avoiding ambiguity using the virtual base class:
public:
	int c;
};

class ClassD : public ClassB, public ClassC {
public:
	int d;
};

int main()
{
	ClassD obj;

	obj.a = 10;				 // Statement 1, Error
	obj.a = 100;				 // Statement 2, Error

    //Avoiding ambiguity using the scope resolution operator:
	//obj.ClassB::a = 10; // Statement 3    
	//obj.ClassC::a = 100; // Statement 4

	obj.b = 20;
	obj.c = 30;
	obj.d = 40;

	//cout << " a from ClassB : " << obj.ClassB::a;
	//cout << "\n a from ClassC : " << obj.ClassC::a;b

    cout << "\n a : " << obj.a;
	cout << "\n b : " << obj.b;
	cout << "\n c : " << obj.c;
	cout << "\n d : " << obj.d << '\n';
}
