#include <iostream>
using namespace std;

class functionss
{
public:
    int func(int num1, int num2)
    {
        return num1 + num2;
    }
    int func(int no, int no1, int no2)
    {
        return no + no1 + no2;
    }
    string func(string s1, string s2)
    {
        return s1 + s2;
    }
    void func()
    {
        float no1;
        float no2;
        cout << no1 << no2 << endl;
    }
};
int main()
{
    functionss objfunc;
    cout << objfunc.func(23, 43) << endl;
    cout << objfunc.func(10, 67.2, 34) << endl;
    cout << objfunc.func("Ritu",  " Raj") << endl;
    cout << objfunc.func(67.2, 33.8) << endl;

    return 0;
}