#include <iostream>
using namespace std;

bool sortedArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
                return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {3, 4, 5, 6, 7}, n = 5;
    bool ans = sortedArray(arr, n);
    if (ans)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
/*
#include<iostream>
using namespace std;

bool isSorted(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i])
				return false;
		}
	}
	return true;
}
int main() {
	int arr[] = { 2,3,4,5,6 }, n =5;
	int ans = isSorted(arr, n);
	if (ans) cout << "True" << endl;
	else cout<< "False" << endl;
}

*/