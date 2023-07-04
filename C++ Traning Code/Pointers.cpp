#include <iostream>
using namespace std;

int main()
{
    // What is a Pointers -----> Data types which hold the address of other data types

    int a = 5;
    int *b = &a;
    // & -----> Address of operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;
    // * -----> (Value at)Dereference operator
    cout << "The value at address of b is " << *b << endl;

    // Pointer to Pointer
    int **c = &b;
    cout << "The adrees of b is " << &b << endl;
    cout << "The adrees of b is " << c << endl;
    cout << "The value at adrees c is " << *c << endl;
    cout << "The value at adrees value_at(value_at(c)) is " << **c << endl;
    return 0;
}