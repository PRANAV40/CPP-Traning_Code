#include<iostream>
using namespace std;

class LinkedList{
    public:
    int data;
    LinkedList* next;      //Self Refrencing

    LinkedList(int val){
        data=val;
        next = NULL;
    }
};
void insertAtTail(LinkedList* &head,int val){
    LinkedList* ptr = new LinkedList(val);

    if(head==NULL){
        head=ptr;
        return;
    }
    LinkedList* temp = head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
}
void display(LinkedList* head){
    LinkedList* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    LinkedList* head=NULL;
    insertAtTail(head,2);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    return 0;
}