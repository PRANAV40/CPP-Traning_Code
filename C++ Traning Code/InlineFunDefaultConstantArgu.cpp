#include<iostream>
using namespace std;


//Inline function ---->
inline int product(int a, int b){
    return a * b;
}
//Default arguments
float moneyReceived(int currentMoney, float factor=1.04,int a){
    return currentMoney * factor + a;
}
int main(){
    // int num1,num2;
    // cout<<"Enter the numbers "<<endl;
    // cin>>num1>>num2;
    // cout<<"The product of two numbers is "<<product(num1,num2);
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in bank account, you will receive "<<moneyReceived(money)<<" Rs after one year"<<endl;   //Taking Default value
    cout<<"For VIP People: If you have "<<money<<" Rs in bank account, you will receive "<<moneyReceived(money,1.1)<<" Rs after one year"<<endl;
    return 0;
}