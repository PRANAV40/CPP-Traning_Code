#pragma once
#include<iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int val) {
		data = val;
		next = NULL;
	}
	void insertAtTail(node*& head, int val);    //Take the haed by reference
	void insertAtHead(node*& head, int val);
	bool search(node* head, int key);
	void deletion(node*& head, int val);
	void deleteAtHead(node*& head);
	node* reverse(node*& head);
	void userInput(int arr[], int size);
	void display(node* head);
};

