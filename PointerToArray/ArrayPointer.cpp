#include "ArrayPointer.h"

//Arrays as function arguments with pointer
int ArrayPointer::sumOfElements(int* arr, int size) {
	int i, sum = 0;
	for (i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

int main() {
	int size = 5;
	int arr[5];
	cout << "Enter the elements of array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	size = sizeof(arr) / sizeof(arr[0]);
	ArrayPointer objFunction;
    int total = objFunction.sumOfElements(arr, size);
	cout << "The sum of array elements is " << total << endl;



	//Pointer and Array 
	/*for (int i = 0; i < size; i++) {
		cout << "Address = "<<arr + i << endl;
		cout <<"Address = "<< & arr[i] << endl;
		cout <<"Value is "<< arr[i] << endl;
		cout <<"Value is "<< *(arr+i) << endl;
	}
	*/
}