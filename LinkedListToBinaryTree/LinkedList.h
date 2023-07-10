#pragma once
#include<iostream>
using namespace std;

// Node structure for the linked list
struct ListNode {
    int data;
    ListNode* next;
};

// Node structure for the binary tree
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

// Linked List class
class BinaryTree {
private:
    ListNode* head;

public:
    // Constructor
    BinaryTree() : head(nullptr) {}

    // Function to insert a new node at the beginning of the linked list
    void insertNode(int data);

    // Function to convert the linked list to a binary tree
    TreeNode* linkedListToBinaryTree() {
        return linkedListToBinaryTreeUtil(head);
    }

private:
    // Recursive utility function to convert a linked list to a binary tree
    TreeNode* linkedListToBinaryTreeUtil(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }

        // Create a new binary tree node using the head of the linked list
        TreeNode* root = new TreeNode;
        root->data = head->data;
        root->left = nullptr;
        root->right = nullptr;

        // Move the head pointer to the next node
        head = head->next;

        // Recursively convert the remaining linked list to the left and right subtrees
        if (head != nullptr) {
            root->left = linkedListToBinaryTreeUtil(head->next);
            root->right = linkedListToBinaryTreeUtil(head->next);
        }

        return root;
    }
};

// Function to perform in-order traversal of a binary tree
void inorderTraversal(TreeNode* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);
        std::cout << root->data << " ";
        inorderTraversal(root->right);
    }
}