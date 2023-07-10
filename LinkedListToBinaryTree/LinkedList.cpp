#include "LinkedList.h"

// Function to insert a new node at the beginning of the linked list
void BinaryTree:: insertNode(int data) {
    ListNode* newNode = new ListNode;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
int main() {
    // Create a sample linked list
    BinaryTree linkedList;
    linkedList.insertNode(36);
    linkedList.insertNode(30);
    linkedList.insertNode(25);
    linkedList.insertNode(15);
    linkedList.insertNode(12);

    // Convert the linked list to a binary tree
    TreeNode* root = linkedList.linkedListToBinaryTree();

    // Perform in-order traversal of the binary tree and print its elements
    cout << "In-order Traversal of Binary Tree: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
