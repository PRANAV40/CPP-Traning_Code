//********Binary Search***************
#include<iostream>
using namespace std;

int Search(int arr[],int key,int num) {
	int low = 0, high = num - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (arr[mid] == key) {
			return mid;
		}
		else if (key > arr[mid]) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}
int main() {
	int arr[] = { 5, 10, 15, 20, 25, 30, 37, 40 };
	int key = 25;
	int num = sizeof(arr) / sizeof(arr[0]);

	int pos = Search(arr, key,num);

	if (pos != 1) {
		cout << "Elements is found at position of " << pos  << endl;
	}
	else {
		cout << "Elements is not present in array" << endl;
	}
	return 0;
}