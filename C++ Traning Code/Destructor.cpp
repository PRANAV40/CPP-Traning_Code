#include <iostream>
using namespace std;

class Test
{
    int *p;

public:
    Test(int num)
    {
        p = new int[10];
        *p = num;
        cout << "Test Created " << endl;
    }
    ~Test()
    {
        delete[] p;
        cout << "Test Destroyed " << endl;
        display();
    }
    void display(){
        cout<<"The value of *p is "<<*p<<endl;
    }
};

int main()
{
    Test t1 = Test(34);
    //delete t1;
    t1.display();
}

// //Global Variable
// int count=0;
// class num{
//     public:
//         num(){
//             count++;
//             cout<<"This is the when the constructor is called over the object number "<<count<<endl;
//         }
//         // ~num(){   //Destructor
//         //     cout<<"This is the when the destructor is called over the object number "<<count<<endl;
//         //     count--;
//         // }
// };
// int main(){

//     // cout<<"We are inside our main function"<<endl;
//     // cout<<"Creating first object n1"<<endl;

//     // num n1;
//     // {
//     //     cout<<"Entering this blocks"<<endl;
//     //     cout<<"Creating two more objects"<<endl;
//     //     num n2,n3;
//     //     cout<<"Existing this blocks"<<endl;
//     // }
//     // cout<<"Return in the main"<<endl;
//     return 0;
// }