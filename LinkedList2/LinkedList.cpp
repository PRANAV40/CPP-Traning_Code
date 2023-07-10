#include "LinkedList.h"

int main() {

	Node* head = NULL;
	Node* second;
	Node* third;
	Node* fourth;

	//dynamically allocate memory for objects at runtime in the heap memory
	head = new Node();
	second = new Node();
	third = new Node();
	fourth = new Node();

	head->data = 43;
	head->next = second;

	second->data = 21;
	second->next = third;

	third->data = 32;
	third->next = fourth;

	fourth->data = 39;
	fourth->next = NULL;

	insertLinkedList(head);
	head = insertAtHead(head, 13);
	insertLinkedList(head);
}