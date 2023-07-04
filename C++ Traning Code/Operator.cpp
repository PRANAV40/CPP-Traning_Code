#include<iostream>
using namespace std;
int main(){
    int num1=15, num2=5;
    cout<<"Operator in C++"<<endl;
    cout<<"Airthmetic Operator"<<endl;
    cout<<"The value of num1 + num2 is: "<<num1 + num2<<endl;
    cout<<"The value of num1 - num2 is: "<<num1 - num2<<endl;
    cout<<"The value of num1 * num2 is: "<<num1 * num2<<endl;
    cout<<"The value of num1 / num2 is: "<<num1 / num2<<endl;
    cout<<"The value of num1 % num2 is: "<<num1 % num2<<endl;
    cout<<"The value of num1++ is: "<<num1++<<endl;
    cout<<"The value of num1-- is: "<<num1--<<endl;
    cout<<"The value of ++num1 is: "<<++num1<<endl;
    cout<<"The value of --num1 is: "<<--num1<<endl;
    cout<<endl;
    cout<<"Assignment Operator"<<endl;
   
    cout<<"The value of num1 += is: "<<num1 +5<<endl;
    cout<<"The value of num1 -= is: "<<num1 -5<<endl;
    cout<<"The value of num1 *= is: "<<num1 *5<<endl;
    cout<<"The value of num1 /= is: "<<num1 /5<<endl;
    cout<<endl;
    cout<<"Comparision Operator"<<endl;   //The return type of comparision operator is bool
    cout<<"The value of num1 == num2 is: "<<(num1 == num2)<<endl;
    cout<<"The value of num1 != num2 is: "<<(num1 != num2)<<endl;
    cout<<"The value of num1 >= num2 is: "<<(num1 >= num2)<<endl;
    cout<<"The value of num1 <= num2 is: "<<(num1 <= num2)<<endl;
    cout<<"The value of num1 > num2 is: "<<(num1 > num2)<<endl;
    cout<<"The value of num1 < num2 is: "<<(num1 < num2)<<endl;
    cout<<endl;
    cout<<"Logical Operator"<<endl;
    cout<<"The value of ((num1==num2) && (num1<num2)) is: "<<((num1==num2) && (num1>num2))<<endl;
    cout<<"The value of ((num1==num2) || (num1<num2)) is: "<<((num1==num2) || (num1>num2))<<endl;
    cout<<"The value of (!(num1==num2)  is: "<<(!(num1==num2))<<endl;
   
    return 0;
}