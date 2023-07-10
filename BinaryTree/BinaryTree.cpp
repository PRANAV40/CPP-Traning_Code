#include "BinaryTree.h"

Node* BinaryTree::create(int item) {
    Node* newNode = new Node(item);
    return newNode;
}

Node* BinaryTree::insertion(Node* root,int value) {
    if (root == NULL) {
        root = create(value); 
        return root;
    }
    if (value <= root->data)
        root->left = insertion(root->left, value);
    else
        root->right = insertion(root->right, value);
    return root;
}
void BinaryTree::insert(int value) {
    root = insertion(root, value);
}
void BinaryTree::inOrderTraversal(Node* root) {
    if (root == NULL)
        return;
    inOrderTraversal(root->left);     
    cout <<  root->data << " ";
    inOrderTraversal(root->right); 
}

void  BinaryTree::preOrderTraversal(Node* root) {
    if (root == NULL)
        return;
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void  BinaryTree::postOrderTraversal(Node* root) {
    if (root == NULL)
        return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
    BinaryTree tree;
    tree.insert(40);
    tree.insert(30);
    tree.insert(50);
    tree.insert(25);
    tree.insert(35);
    tree.insert(15);
    tree.insert(28);
    tree.insert(45);
    tree.insert(60);
    tree.insert(55);
    tree.insert(70);

    cout << "Inorder traversal: ";
    tree.inOrderTraversal(tree.root);
    cout <<endl<< "Pre Order Traversal: ";
    tree.preOrderTraversal(tree.root);
    cout <<endl<< "Post Order Traversal: ";
    tree.postOrderTraversal(tree.root);

    return 0;
}