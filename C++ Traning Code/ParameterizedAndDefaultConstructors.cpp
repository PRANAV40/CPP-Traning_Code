// //*********************Parameterized and Default Constructors***************
// #include<iostream>
// using namespace std;

// class Complex{
//     int a,b;
//     public:
//     Complex(int,int);    //Parameterize Constructor Decleration
//     void printNumber(){
//         cout<<"The value of "<< a <<" + "<< b <<"i"<<endl;
//     }
// };
// Complex :: Complex(int x, int y){ //Parameterize Constructor Difinition
//     a = x;
//     b = y;
// }
// int main(){
//     //Implicit call
//     Complex a(3,4);
//     a.printNumber();

//     //Explicit call
//     Complex b = Complex(4,5);
//     b.printNumber();
//     return 0;
// }
// Exercise question
// Create a function (hint:make it a friend function) which takes two point objects
//  and computes the distence between those two points
// #include<bits/stdc++.h>
// using namespace std;

// class Point{
//     int x,y;
//     public:
//     friend void distance(Point o1, Point o2);
//         Point(int num1, int num2){
//             x = num1;
//             y = num2;
//         }
//     void display()
//     {
//         cout << "The value of coordinate is (" << x << "," << y << ")" << endl;
//     }
// };
// void distance(Point o1, Point o2){
//     int distance;
//     distance = ((o2.x - o1.x) * (o2.x - o1.x)) + ((o2.y - o1.y) * (o2.y - o1.y));
//     distance = sqrt(distance);
//     cout << "Distance between the two points is " << distance << endl;
// }
// int main(){
//     Point dist1(1, 0);
//     dist1.display();
//     Point dist2(70, 0);
//     dist2.display();
//     distance(dist1, dist2);
//     return 0;
// }