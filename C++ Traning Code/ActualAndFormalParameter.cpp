//Difference Between Actual and Formal Parameters
#include<iostream>
using namespace std;
int add(int x, int y) // x and y are the formal parameters
{
    int sum;
    sum = x + y;
    return sum;
}
int main()
{
    int a, b, result;
    cout << "Enter two values that you want to add " << endl;
    cin >> a >> b;
    result = add(a, b); // a and b are the actual parameters
    cout << "result of addition is " << result << endl;
    return 0;
}