//************Static Data Member*************
#include<iostream>
using namespace std;

class Employee{
    int id;
    //It is static variable
    static int count;
    public:
        void setData(void){
            cout<<"Enter your ID"<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The ID of the Employee is "<<id<<" and the Employee number is "<<count<<endl;
        }
        //Static function
        static void getCount(void){
            cout<<"The value of count is "<<count<<endl;
        }

};
//Count is a static data memeber of the class employee
int Employee :: count;    //It is a static data member and the default value is zero
int main()
{
    
    Employee e1, e2, e3;
    e1.setData();
    e1.getData();
    Employee::getCount();    //Access static function using class name
    cout<<endl;

    e2.setData();
    e2.getData();
    Employee::getCount();
    cout<<endl;

    e3.setData();
    e3.getData();
    Employee::getCount();
    return 0;
}