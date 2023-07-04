//**********Dynamic Initialization of Objects Using Constructors******
#include<iostream>
using namespace std;

class bankDeposite{
    //Varilble decleration
    int princple;
    int year;
    float intrestRate;
    float returnValue;
    public:
        //Constructor decleration
        bankDeposite(){};
        bankDeposite(int p,int y, float r);  // r can be value like 0.04
        bankDeposite(int p,int y, int r);   // r can be value like 12
        void show();     //Methods decleration
};
bankDeposite :: bankDeposite(int p,int y, float r){     //Constructor definition
    princple = p;
    year = y;
    intrestRate = r;
    returnValue = princple;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
    
}
bankDeposite :: bankDeposite(int p,int y, int r){   //Constructor definition
    princple = p;
    year = y;
    intrestRate = float(r)/100;
    returnValue = princple;
    

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
    
}
void bankDeposite :: show(){          //Methods definition
    cout<<"Princple amount was "<<princple
        <<" Return value after "<<year
        <<" years is "<<returnValue<<endl;
}
int main(){
    bankDeposite bd1,bd2,bd3;
    int p, y;
    float r;
    int R;

    bd3.show();
    cout<<"Enter the value of P , Y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = bankDeposite(p,y,r);
    bd1.show();

    cout<<"Enter the value of P , Y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = bankDeposite(p,y,R);
    bd2.show();
    return 0;
}