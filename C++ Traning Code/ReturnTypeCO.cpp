#include<iostream>
using namespace std;

bool comparisionOperator(int a, int b){
    if(a==b){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a =5,b=5;
    if(comparisionOperator(a,b)){
        cout<<"A is equal to b"<<endl;
    }
    else{
        cout<<"A is not equal to b"<<endl;
        
    }
    
    // cout<<comparisionOperator(a,b);
    return 0;
}