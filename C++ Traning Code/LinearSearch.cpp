#include <iostream>
using namespace std;

int linearSearch(int arr[], int num, int key)
{
    int i;
    for (i = 0; i < num; i++)
        if (arr[i] == key)
            return i;
        return -1;
}

int main()
{
    int arr[] = {3, 4, 1, 7, 5};
    int num = sizeof(arr) / sizeof(arr[0]);
    int key = 4;

    int index = linearSearch(arr, num, key);

    if (index == -1)
    {
        cout << "Elements is not present in the array " << endl;
    }
    else
    {
        cout << "Elements is found at position " << index << endl;
    }
    return 0;
}