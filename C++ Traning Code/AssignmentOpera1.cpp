// CPP Program to demonstrate the use of copy constructor
// and assignment operator
#include <iostream>
#include <stdio.h>
using namespace std;

class Demo
{
    int num;

public:
    void getData()
    {
        cout << "Enter the number: ";
        cin >> num;
    }
    void putData()
    {
        cout << "The value of num is " << num << endl;
    }
    void operator +=(Demo d)
    {
        num = num + d.num;
    }
};

int main()
{
    Demo d1, d2;
    d1.getData();
    d2.getData();
    d1.putData();
    d2.putData();
    d1 += d2;
    d1.putData();

    return 0;
}

/*
class Test {
    int num;
public:
	Test() {}
	Test(int no) { num = no;}
	Test(const Test& t)
	{
        num = t.num;
		cout << "Copy constructor called " << endl;
	}

	Test& operator=(const Test& t)
	{
        num = t.num;
		cout << "Assignment operator called " << endl;
		return *this;
	}
    void dsiplay(){
        cout<<"The value of num is "<<num<<endl;
    }
};

// Driver code
int main()
{
	Test t1=22, t2;
	t2 = t1;
    t2.dsiplay();
	Test t3 = t1;
    t3.dsiplay();
	return 0;
}*/

// #include <iostream>
// using namespace std;
// class Value
// {
//     int a, b;
//     float c;

// public:
//     Value(int aa = 0, int bb = 0, float cc = 0.0)
//         : a(aa), b(bb), c(cc) {}
//     Value &operator=(const Value &rv)
//     {
//         a = rv.a;
//         b = rv.b;
//         c = rv.c;
//         return *this;
//     }
//     friend ostream &
//     operator<<(ostream &os, const Value &rv)
//     {
//         return os << "a = " << rv.a << ", b = "
//                   << rv.b << ", c = " << rv.c;
//     }
// };
// int main()
// {
//     Value a, b(1, 2, 3.3);
//     cout << "a: " << a << endl;
//     cout << "b: " << b << endl;
//     a = b;
//     cout << "a after assignment: " << a << endl;
// }