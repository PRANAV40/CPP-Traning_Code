//
// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };
//***************Multiple Inheritance***************
#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2 : public Base1
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Derived : public Base2 //public Base1
{
public:
    void show()
    {
        //Base1::set_base1int(45);
        //Base2::set_base1int(25);   
        cout << "The value of Base1 is " << base1int << endl;
        cout << "The value of Base2 is " << base2int << endl;
        cout << "The sum of these values is " << base1int + base2int << endl;
    }
};
int main()
{
    Derived der;
    der.set_base1int(35);
    der.set_base2int(25);
    der.show();
    return 0;
}