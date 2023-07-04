#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculater{
    int a,b;
    public:
        void getDataSimple(){
            cout<<"Enter the number of a: "<<endl;
            cin>>a;
            cout<<"Enter the number of b: "<<endl;
            cin>>b;
        }
        void performOperationsSimple(){
            cout<<"The value of a + b is "<< a + b <<endl;
            cout<<"The value of a - b is "<< a - b <<endl;
            cout<<"The value of a * b is "<< a * b <<endl;
            cout<<"The value of a / b is "<< a / b <<endl;
        }
};
class ScientificCalculater{
    int a,b;
    public:
        void getDataScientific(){
            cout<<"Enter the number of a: "<<endl;
            cin>>a;
            cout<<"Enter the number of b: "<<endl;
            cin>>b;
        }
        void performOperationsScientific(){
            cout<<"The value of sin(a) is "<<sin(a)<<endl;
            cout<<"The value of Cos(a) is "<<cos(a)<<endl;
            cout<<"The value of tan(a) is "<<tan(a)<<endl;
            cout<<"The value of exp(a) is "<<exp(a)<<endl;
        }
};
class HybridCalculater : public SimpleCalculater, public ScientificCalculater{

};
int main(){
    // SimpleCalculater calc;
    HybridCalculater calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();
    return 0;
}