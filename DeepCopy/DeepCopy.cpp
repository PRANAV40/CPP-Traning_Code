#include "DeepCopy.h"

void DeepCopy:: setdata(int x, int y, int z)
{
     a = x;
     b = y;
    *p = z;
}
void DeepCopy:: showdata()
{
    std::cout << "value of a is : " << a << std::endl;
    std::cout << "value of b is : " << b << std::endl;
    std::cout << "value of *p is : " << *p << std::endl;
}

int main()
{
    DeepCopy d1;
    d1.setdata(4, 5, 7);
    d1.showdata();
    DeepCopy d2 = d1;
    d2.showdata();
    return 0;
}