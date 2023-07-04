#include<bits/stdc++.h>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int>list1;        //Making the list without value but the size of list is 0
     
    list1.push_back(4);     //Push the value into the list1
    list1.push_back(6);
    list1.push_back(8);
    list1.push_back(10);
    list1.push_back(12);
    list1.push_back(14);
    cout<<"The list1 is: ";
    display(list1);

    //Reversing the list1
    list1.reverse();
    cout<<"After reversing the list1: ";
    display(list1);
    //Sorting the list1 using sort() function
    list1.sort();
    // display(list1);
    list<int>list2(3);      //Making list without any value but the size of list is 3
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 55;
    iter++;
    *iter = 65;
    iter++;
    cout<<"The list2 is: ";
    display(list2);
    list2.sort();
    //Remopving elements from the list1
    // list1.pop_back();     //Pop the value from list1 from back side
    // display(list1);
    // list1.pop_front();   //Pop the value from list1 from front side
    // display(list1);
    // list1.remove(8);   //Remove the value from list1 according to your choice
    //display(list1);
    

  
    list1.merge(list2);    //Merge the list1 and list2 both
    cout<<"List after merging and sorting is: ";
    display(list1);
    return 0;
}