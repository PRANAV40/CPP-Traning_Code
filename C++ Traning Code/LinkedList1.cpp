// #include <iostream>
// using namespace std;
// // struct Node {
// //    int data;
// //    Node* next;
// // };
// // struct Node* newNode(int data) {
// //    Node* node = new Node;
// //    node->data = data;
// //    node->next = NULL;
// //    return node;
// // }
// // void insertNewNode(Node** root, int data) {
// //    Node* node = newNode(data);
// //    Node* ptr;
// //    if (*root == NULL) {
// //       *root = node;
// //    }
// //    else {
// //       ptr = *root;
// //       while (ptr->next != NULL) {
// //          ptr = ptr->next;
// //       }
// //       ptr->next = node;
// //    }
// // }
// // void printLinkedList(Node* root) {
// //    while (root != NULL) {
// //       cout << root->data << " -> ";
// //       root = root->next;
// //    }
// //    cout << "NULL" << endl;
// // }
// // Node* createLinkedList(int arr[], int n) {
// //    Node *root = NULL;
// //    for (int i = 0; i < n; i++) {
// //       insertNewNode(&root, arr[i]);
// //    }
// //    return root;
// // }
// int main() {
//     int n,arr[n];
//     cout<<"Enter the size of Array ";
//     cin>>n;
//     cout<<"Enter the array ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//      } 
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     } 
    
//    //int arr[] = { 1, 2, 3, 4, 5 }, n = 5;
// //    Node* root = createLinkedList(arr, n);
// //    printLinkedList(root);
//    return 0;
// }

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtTail(Node* &head,int value){
    Node* ptr = new Node(value);
    if(head!=NULL){
        head=ptr;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=ptr;
}
void display(Node* head){
	Node* temp = head;
    while(head!=NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head = NULL;
    insertAtTail(head,5);
    insertAtTail(head,2);
    insertAtTail(head,7);
    insertAtTail(head,6);
    display(head);
    return 0;
}
// class Node {
// public:
// 	int data;
// 	Node* next;

// 	Node(int val) {
// 		data = val;
// 		next = NULL;
// 	}
// };
// void insertAtHead(Node* &head, int val){
// 	Node* n = new Node(val);
// 	n->next=head;
// 	head=n; 
	
// }
// void insertAtTail(Node* &head, int val) {
// 	Node* n = new Node(val);

// 	if (head == NULL) {
// 		head = n;
// 		return;
// 	}
// 	Node* temp = head;
// 	while (temp->next != NULL) {
// 		temp = temp->next;
// 	}
// 	temp->next = n;
// }
// void display(Node* head) {
// 	Node* temp = head;
// 	while (temp != NULL) {
// 		cout << temp->data << " ";
// 		temp = temp->next;
// 	}
// 	cout <<"NULL"<< endl;
// }
// int main() {
//     int n;
//     cout<<"Enter the size of Array ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the array ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     } 
// 	Node* head = NULL;
//     for(int i=0;i<n;i++){
//         insertAtTail(head, arr[i]);
//     }
// 	display(head);
//     insertAtHead(head, 6);
// 	display(head);
// 	return 0;
// }

// class node {
// public:
// 	int data;
// 	node* next;
// 	node(int val) {
// 		data = val;
// 		next = NULL;
// 	}
// };
// // void insertAtHead(node*& head, int val) {
// 	node* ptr = new node(val);
// 	ptr->next = head;
// 	head = ptr;
// }
// void insertAtTail(node* &head, int val) {    //Take the haed by reference
// 	node* ptr = new node(val);
// 	// head->data = val;

// 	if (head == NULL) {
// 		head = ptr;
// 		return;
// 	}
// 	node* temp = head;
// 	while (temp->next != NULL) {
// 		temp = temp->next;
// 	}
// 	temp->next = ptr;
// 	ptr->next = NULL;
// }

// void display(node* head) {   //By Value
// 	node* temp = head;
// 	while (temp != NULL) {
// 		cout <<temp->data<< "->"<< " ";
// 		temp = temp->next;
// 	}
// 	cout << "NULL"<<endl;
// }

// void userInput(int arr[],int size)
// {
// 	cout << "Enter array elements" << endl;
// 	for (int i = 0; i < size; i++)
// 	{
// 		cin >> arr[i];
// 	}
// }

// void print(int arr[], int size)
// {
// 	cout << "Array elements are:" ;
// 	for (int i = 0; i < size; i++)
// 		cout << arr[i] << " ";
// 	cout << endl;
// }

// int main() {
	
// 	int size;
// 	cout<<"Enter the size of array";
// 	cin>>size;
// 	int arr[size];
// 	userInput(arr,size);
// 	print(arr,size);
// 	node* head = NULL;
// 	for (int i = 0; i < size; i++) {
// 		insertAtTail(head, arr[i]);
// 	}
// 	display(head);
// 	insertAtTail(head,7);
// 	display(head);
// 	//insertAtEnd(head,7);
// 	//display(head);
// 	// insertAtHead(head, 6);
// 	// display(head);
// 	return 0;
// }

/*
void userInput(int arr[],int size)
{
	cout << "Enter array elements" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void print(int arr[], int size)
{
	cout << "Array elements are:" <<" ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
*/
