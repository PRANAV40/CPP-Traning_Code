#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtTail(node* &head, int val){
    node* ptr = new node(val);

    if(head==NULL){
        head=ptr;
        return;
    }
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->next=NULL;    
}
void insertAtHead(node* &head,int val){
    node* ptr = new node(val);
    ptr->next=head;
    head=ptr;
}
void deleteAtHead(node* &head){
    node* todelete = head;
    head=head->next;
    delete todelete;
}
void deletion(node* &head,int key){
    node* temp = new node(key);
    
    if(head == NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
        while(temp->next->data!=key){
            temp=temp->next;
        } 
        node* todelete = new node(key);
        temp->next = temp->next->next;
        delete todelete;
}
void display(node* head){
   node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}

int main(){

    node* head = NULL;
    insertAtTail(head,3);
    insertAtTail(head,13);
    insertAtTail(head,23);
    insertAtTail(head,33);
    display(head);
    insertAtHead(head,43);
    display(head);
    deleteAtHead(head);
    display(head);
    return 0;
}