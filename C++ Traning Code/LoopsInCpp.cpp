#include<iostream>
using namespace std;
int mainO(){
    //**************For Loops*************
    /* Syntax of For loops
    for(initialization;condition;updation){
        loop body(c++ code);
    }
    */
    //    for(int i=0;i<40;i++){
    //     cout<<i;
    //    }
    //Example of infinte for loop
    // for(int i=0;34<40;i++){
    //     cout<<i;
    // }
   //**************While Loop*************
   /*Syntax of While loops
   while(condition){
        c++ statements;
   }
   */
    
    //     int i=1;
    //     while(i<=40){
    //         cout<<i<<endl;
    //         i++;
    //   }
    //Example of infinte While loop
    // int i=1;
    // while(true){
    //     cout<<i<<endl;
    //     i++;
    // }
    //*************Do-While Loop**********
    
    /*Syntax of Do-while loops
    do{
        c++ statements;
    }while(condition);
    */
    //Example of infinte While loop
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=30);
    //**********Table of any number***********
    int num;
    cout<<"Enter the number:";
    cin>>num;
    for(int i=1;i<=10;i++){
        cout<<num<< " * "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}