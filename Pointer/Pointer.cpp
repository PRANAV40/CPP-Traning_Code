#include "Pointer.h"

void Pointer::showFun() {
	int num = 30;
	//Declare the pointer varialbe
	int* ptr;
	// note that data type of ptr and var must be same
	ptr = &num;     //&num = address of num

	// assign the address of a variable to a pointer
	cout << "Value of num variable = " << num << "\n";					//Value of num variable 
	cout << "Address of ptr variable = " << ptr << "\n";			   //Address of num variable 
	cout << "Address of num variable = " << &num << "\n";			  //Address of num variable 
	*ptr = 50;														 //Modified value of num
	cout << "Value at *ptr = " << *ptr << "\n";						//Value at address pointed by ptr 
	cout << "Modified value of num variable = " << num << "\n";	   //Modified value of num

	cout << "\n";
	//If we can pass the second variable in same pointer after that the is change but the address of is same like as in this program
	int num2 = 60;
	*ptr = num2;		//Will the address in num chnage to point num2----> No
	cout << "Address of ptr variable = " << ptr << "\n";
	cout << "Value at *ptr = " << *ptr << "\n";

}
int main() {
	Pointer objPointer;
	objPointer.showFun();
	
	return 0;
}