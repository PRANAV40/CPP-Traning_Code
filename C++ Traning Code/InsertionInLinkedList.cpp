#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->value);
        ptr = ptr->next;
    }
}
//Case 1 :- Insert at the begining of the linked list
struct Node* insertAtFirst(struct Node *head, int data){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->next = head;

    ptr->value = data;
    return ptr;
}
//Case 2 :- Insert at the between of the linked list
struct Node* insertAtIndex(struct Node* head, int data, int index){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    ptr->value = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
//Case 3 :- Insert at the end of the linked list
struct Node* insertAtEnd(struct Node *head, int data){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->value = data;
    struct Node * p = head;

    while(p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
//Case 4 :- Insert after any node of the linked list
struct Node* insertAfterNode(struct Node *head,struct Node *prevNode, int data){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->value = data;
    
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    //struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));     //Dynamicli allocation of node
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    //fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second node
    head->value = 57;
    head->next = second;

    // Link second and third nodes
    second->value = 61;
    second->next = third;

    // Link third and fourth nodes
    third->value = 87;
    third->next = NULL;

    // Terminates the list at the fourth nodes
    // fourth->value = 97;
    // fourth->next = NULL;

    
    //call the function for traversing the Linked List 
    cout<<"Linked List before insertion"<<endl;
    linkedListTraversal(head);

    //call the function for insert at the start of Linked List 
    // head = insertAtFirst(head,45);
    // cout<<"After insert at start of Linked List "<<endl;
    // linkedListTraversal(head);
    // //call the function for insert at the between of Linked List 
    // head = insertAtIndex(head,45,2);
    // cout<<"After insert at between of Linked List "<<endl;
    // linkedListTraversal(head);

    
    //call the function for insert at the last node of Linked List 
    // head = insertAtEnd(head,43);
    // cout<<"Linked List after insertion"<<endl;
    // // cout<<"After insert at the last node of Linked List "<<endl;
    // linkedListTraversal(head);

    //call the function for insert after any node of Linked List 
    head = insertAfterNode(head,second,41);
    cout<<"Linked List after insertion"<<endl;
    // cout<<"After insert at the last node of Linked List "<<endl;
    linkedListTraversal(head);


    return 0;
}
