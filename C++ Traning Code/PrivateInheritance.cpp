#include <iostream>
using namespace std;

class A
{
protected:
    int b = 3;

private:
    int c = 4;

public:
    int d = 5;
    int getPrivate()
    {
        return c;
    }
};
class B : protected A
{
public:
    int getPublic()
    {
        return d;
    }
    int getProtected()
    {
        return b;
    }
};
int main()
{
    B obj;
    cout << "Public member for given class is: " << obj.getPublic()<< endl;
    cout << "Private member for given class is not working " << endl;
    cout << "Protected member for given class is: " << obj.getProtected() << endl;
    return 0;
}