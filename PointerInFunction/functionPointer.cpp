#include "functionPointer.h"

void functionPointer::increment(int *p) {
	*p = *p + 1;
}
int main() {
	int num;
	num = 20;
	functionPointer objAirthmetic;

	objAirthmetic.increment(&num);
	cout << "The increment number is = " << num << endl;
	cout << "The address of num is = " << &num << endl;
	return 0;
}