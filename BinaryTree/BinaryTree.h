#pragma once
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Binary Tree class
class BinaryTree {
    Node* insertion(Node* root, int value);
public:
    Node* root = NULL;
	Node* create(int item);
	
    void insert(int value);
	void inOrderTraversal(Node* root);
	void preOrderTraversal(Node* root);
	void postOrderTraversal(Node* root);
};