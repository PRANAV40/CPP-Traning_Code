#include<iostream>
using namespace std;

int main(){
    int arr[5] = {3,5,8,2,1,};
    int *ptr[5];

    //Print the address 
    for(int i=0;i<5;i++){
        
        ptr[i] = &arr[i]; 
    }
    //Print the value 
    cout<<"The value is: ";
    for(int i=0;i<5;i++){
        cout<<*ptr[i]<<" ";
    }
    return 0;
}
// int main(){
//     int var;
//     var = 54;
//     int *ptr;
//     ptr = &var;
    
//     cout<<"The value of "<<var<<endl; 
//     cout<<"The address of "<<ptr<<endl; 
//     cout<<"The addressof "<<&ptr<<endl; 
//     cout<<"The value of "<<*ptr<<endl; 
//     cout<<endl;
//     int **ptr1;
//     ptr1 = &ptr;
//     cout<<"Pointer of Pointer"<<endl;
//     cout<<"The address of "<<ptr1<<endl; 
//     cout<<"The address of "<<&ptr1<<endl; 
//     cout<<"The value of "<<**ptr1<<endl; 
//     return 0;
// }