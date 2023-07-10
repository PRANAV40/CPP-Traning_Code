#pragma once
#include<iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};
void insertLinkedList(Node* head) {
	//Node* temp = head;
	cout << "The Elements in the Linked List: ";
	while (head != NULL) {
		cout << head->data<<"-->";
		head = head->next;
	}
	cout << "NULL"<<endl;
}
Node* insertAtHead(Node* head, int value) {
	Node* ptr = new Node();
	ptr->next = head;
	ptr->data = value;
	return ptr;
}
