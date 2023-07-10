#include "DoublyLinkedList.h"

void insertAtHead(node*& head, int val) {
	node* ptr = new node(val);
	ptr->next = head;
	if (head != NULL) {
		head->prev = ptr;
	}
	head = ptr;
}
void insertAtTail(node*& head, int val) {

	if (head == NULL) {
		insertAtHead(head, val);
		return;
	}
	node* ptr = new node(val);
	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = ptr;
	ptr->prev = temp;
}
void deleteAtHead(node* head) {
	node* todelete = head;
	head = head->next;
	head->prev = NULL;

	delete todelete;
}
void deletion(node*& head, int pos) {
	if (pos == 1) {
		deleteAtHead(head);
		return;
	}
	node* temp = head;
	int count = 1;

	while (temp != NULL && count != pos) {
		temp=temp->next;
		count++;
	}
	temp->prev->next = temp->next;
	if (temp->next != NULL) {
		temp->next->prev = temp->prev;
	}
	delete temp;

}
void display(node* head) {
	node* temp = head;
	while (temp->next != NULL) {
		cout << temp->data << "-->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

int main() {
	node* head = NULL;
	insertAtTail(head, 4);
	insertAtTail(head, 6);
	insertAtTail(head, 7);
	insertAtTail(head, 3);
	display(head);
	insertAtHead(head, 2);
	display(head);
	deletion(head,4);
	display(head);
	return 0;
}