#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    //**************Selection Control Structure********************
    if(age < 18){
        cout<<"You are not eligble for taking part in election to give the vote.";
    }
    else if(age == 18){
        cout<<"Now! you are eligble for taking part in election to give the vote.";
    }
    else if(age > 60){
        cout<<"You are eligble for taking part in election and also give the \"Vote From Home.\"";
    }
    else{
        cout<<"You are eligble to give the vote.";
    }
    return 0;
}