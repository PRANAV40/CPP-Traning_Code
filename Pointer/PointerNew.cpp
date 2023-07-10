#include "PointerNew.h"

void PointerNew :: display() {

	int num = 43;
	int* ptr = &num;

	cout << *ptr;
}