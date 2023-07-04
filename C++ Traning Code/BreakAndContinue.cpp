#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 40; i++)
    {
        /* code 
        ***********Break statements**********
        */
        cout<<i<<endl;
        if(i==2){
            break;
        }
    }
    for (int i = 0; i < 40; i++)
    {
        /* code 
        ***********Continue statements**********
        */
        
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}