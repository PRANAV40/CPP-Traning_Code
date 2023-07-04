// OOPs - Classes and Objects

    // C++ ---> Initially called ---> C with classes by stroustroup
    // Structures had Limitations
            // - members are public 
            // - No methods
    // classes ---> Structures + more
    // classes ---> can have methods and properties
    // classes ---> can make few members as private and few as public
    // You can declare objects along with the class declartion like this
        /*class Employee{
            //class definition;
        } sum, product, div*/
    // sum.salary = 8000 makes no sense if salary is privatef

    // Nesting member function
#include<iostream>
#include<string>
using namespace std;

class binary{
    //Declare the variable in private because we can not use or by default (the member of class is private) any access modifiers 
    string s;
    public:
    //Declare the function inside the class
        void read(void);
        void chk_bin(void);
        void ones_complement(void);
        void display1(void);
        void display2(void);
};
//This functions is used to read the elements given by user
void binary :: read(void){
    cout<<"Enter the binary number: "<<endl;
    cin>>s;
}
//This functions is used to check the binary number given by user
void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Incorrect Binary Format"<<endl;
            exit(0);
        }
    }
}
//This functions is give the onces complements of binary number given by the user
void binary :: ones_complement(void){
    //Nesting member function in C++
    chk_bin();  
    for (int i = 0; i < s.length(); i++){
        
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}
//This functions is used to display the output of the program
void binary :: display1(void){
    cout<<"\nDisplaying your Binary Number"<<endl;
    for (int i = 0; i < s.length(); i++){
        cout<<s.at(i);
    }
}
void binary :: display2(void){
    cout<<"\nDisplaying your Binary Number in Ones form " << endl;
    for (int i = 0; i < s.length(); i++){
        cout<<s.at(i);
    }
}
//This is a driver code
int main(){
    
    //Decalre the object 
    binary b;
    b.read();
    // b.chk_bin();
    b.display1();
    b.ones_complement();
    b.display2();

    return 0;
}