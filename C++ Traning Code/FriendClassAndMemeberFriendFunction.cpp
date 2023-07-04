//************Friend Classes & Member Friend Functions***********
#include <iostream>
using namespace std;

// Forward declaration of Complex class
class Complex;

class calculator
{
public:
    int head;
    int add(int a, int b)
    {
        return (a + b);
    }
    //Decleration of Function
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex      //Difinition of the class 
{
    int a, b;
    //Individually declaring functions as friend and it is also called member friend function
    // friend int calculator :: sumRealComplex(Complex, Complex);
    // friend int calculator :: sumCompComplex(Complex, Complex);

    // Aliter: Declaring the entire calculator class as friend
    //Decleration of friend class
    friend class calculator;

public:
    void setNumbetr(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << " i " << endl;
    }
};
//Definition of the function
int calculator :: sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int calculator :: sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;      ///Create object of complex class 
    o1.setNumbetr(1, 4);
    o2.setNumbetr(5, 7);
    calculator calc;      //Create object of friend class 
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of Complex part of o1 and o2 is " << resc << endl;
    
    return 0;
}