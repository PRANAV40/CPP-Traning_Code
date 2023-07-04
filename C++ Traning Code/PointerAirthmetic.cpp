#include<iostream>
using namespace std;

int main(){
    int arr[5] = {4,5,7,3,1};
    int *p = arr;

    for(int i=0;i<5;i++){
        cout<<*(p++)<<endl;    //Increments the pointer 
    }

    return 0;
}