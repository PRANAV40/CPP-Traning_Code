#include <iostream>
using namespace std;

class Student
{
public:
    void add(int num1, int num2)
    {
        cout << num1 + num2;
    }
    void sub(int num1, int num2)
    {
        cout << num1 - num2;
    }
};
int main()
{
    Student objStd;
    objStd.sub(12,10);
    objStd.add(12,10);
    return 0;
}