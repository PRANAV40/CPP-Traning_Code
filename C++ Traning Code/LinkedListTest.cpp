// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// void insertAtTail(Node* &head,int val){
//     Node* ptr = new Node(val);
//     if(head==NULL){
//         head=ptr;
//         return;
//     }
//     Node* temp = head;
//     while (temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=ptr;
    
// }
// void insertAtHead(Node* &head,int val){
//     Node* temp = new Node(val);
//     temp->next=head;
//     head = temp;
// }
// void deleteAtHead(Node* &head){
//     Node* toDelete = head;
//     head=head->next;
//     delete toDelete;
// }
// void deletion(Node* &head,int val){
//     Node* temp = head;
//     if(head == NULL){
//         return;
//     }
//     if(head->next==NULL){
//         deleteAtHead(head);
//         return;
//     }
//     while (temp->next->data!=val)
//     {
//         temp = temp->next;
//     }
//     Node* todelet = new Node(val);
//     temp->next = temp->next->next;
//     delete todelet;
    
// }
// void display(Node* head){
//     while (head!=NULL)
//     {
//         cout<<head->data<<"-->";
//         head=head->next;
//     }
//     cout<<"NULL"<<endl;    
// }
// int main()
// {
//     Node *head = NULL;
//     insertAtTail(head, 5);
//     insertAtTail(head, 2);
//     insertAtTail(head, 7);
//     insertAtTail(head, 6);
//     display(head);
//     insertAtHead(head,4);
//     display(head);
//     cout<<"Deletion"<<endl;
//     deletion(head,2);
//     display(head);
//     deleteAtHead(head);
//     display(head);
//     return 0;
// }

// /*
// void deletion(Node* &head,int val){
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         deleteAtHead(head);
//         return;
//     }
//     Node* temp = head;
//     while (temp->next->data!=val)
//     {
//         temp = temp->next;
//     }
//     Node* teodelete = new Node(val);
//     temp->next=temp->next->next;
//     delete teodelete;
    
// }
// void deleteAtHead(Node* &head){
//     Node* todelete = head;
//     head=head->next;
//     delete todelete;
// }
// void insertAtHead(Node* &head,int val){
//     Node* temp = new Node(val);
//     temp->next=head;
//     head= temp;
// }
// void insertAtTail(Node* &head,int val){
//     Node* ptr = new Node(val);
//     if(head==NULL){
//         head=ptr;
//         return;
//     }
//     Node* temp = head;

//     while (temp->next!=NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next=ptr;    
// }
// */
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();
}