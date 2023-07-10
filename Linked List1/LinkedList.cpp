#include "LinkedList.h"

//Insert at the tail of linked list 
void insertAtTail(node* &head, int val) {    //Take the haed by reference
	node* ptr = new node(val);

	if (head == NULL) {
		head = ptr;
		return;
	}
	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = ptr;
	ptr->next = NULL;
}
//Insert at the haed of linked list
void insertAtHead(node* &head, int val) {
	node* ptr = new node(val);
	ptr->next = head;
	head = ptr;
}
//Search the elements with key
bool search(node* head, int key) {
	node* temp = head;
	while (temp != NULL) {
		if (temp->data == key) {
			return true;
		}
		temp = temp->next;
	}
	return false;
}
//Delete the node from the head
void deleteAtHead(node*& head) {
	node* todelete = head;
	head = head->next;

	delete todelete;
}
//Delete any node from value
void deletion(node*& head, int val) {
	node* temp = head;
	//If Linked list is empty
	if (head == NULL) {
		return;
	}
	//If linked list is only one node then delete from head node
	if (head->next == NULL) {
		deleteAtHead(head);
		return;
	}
	while (temp->next->data!=val) {
		temp = temp->next;
	}
	node* todelete = temp->next;
	temp->next = temp->next->next;

	delete todelete;
}

node* reverse(node*& head) {
	node* prevptr = NULL;
	node* currptr = head;
	node* nextptr;

	while (currptr != NULL) {
		nextptr = currptr->next;
		currptr->next = prevptr;

		prevptr = currptr;
		currptr = nextptr;
	}
	return prevptr; //This is new head of linked list
}
void userInput(int arr[], int size)
{
	cout << "Enter 5 array elements" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}
void display(node* head) {		//Take the haed by value
	node* temp = head;
	while (temp != NULL) {
		cout << temp->data << "-->";
		temp = temp->next;
	}
	cout << "NULL"<<endl;
}
int main() {
	int size = 5;
	int arr[5];
	userInput(arr, size);
	node* head = NULL;
	cout << "The Elements in the Linked List is: ";
	for (int i = 0; i < size; i++) {
		insertAtTail(head, arr[i]);
	}
	display(head);
	cout << "After inserting the elements on tails ";
	insertAtTail(head, 22);
	display(head);
	cout << "After inserting the elements on head ";
	insertAtHead(head, 6);
	display(head);
	cout << search(head, 12) << endl;
	deletion(head, 23);
	cout << "After deletion the node in Linked List: ";
	display(head);
	cout << "Deletion the head node from Linked List: ";
	deleteAtHead(head);
	display(head);
	cout << "Reverse the Linked list using iterative methods: ";
	node* newhead = reverse(head);
	display(newhead);
	return 0;
}