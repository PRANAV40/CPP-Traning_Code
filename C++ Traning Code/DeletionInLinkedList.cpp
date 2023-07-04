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
// Case 1 :- Deleting the first element from the linked list
struct Node *deleteFirstNode(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
// Case 2 :- Deleting the element at a given index from the linked list
struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    
    return head;
}
// Case 3 :- Deleting last element from the linked list
struct Node *deleteAtLast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
// Case 4: Deleting the element with a given value from the linked list
struct Node * deleteByValue(struct Node * head, int data){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->value != data && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->value == data){
        p->next = q->next;
        free(q);
    }
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    // struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node)); // Dynamicli allocation of node
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    // fourth = (struct Node *)malloc(sizeof(struct Node));

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
    cout << "Linked list before deletion" << endl;
    linkedListTraversal(head);
    // Case 1 :- Deleting the first element from the linked list
    // cout << "Linked list after deletion" << endl;
    // head = deleteFirstNode(head);
    // linkedListTraversal(head);
    // //Case 2 :- Deleting the element at a given index from the linked list
    // head = deleteAtIndex(head,2);
    // linkedListTraversal(head);
    // Case 3 :- Deleting last element from the linked list

    cout << "Linked list after deletion" << endl;
    // head = deleteAtLast(head);
    // linkedListTraversal(head);

    // Case 4: Deleting the element with a given value from the linked list
    head = deleteByValue(head,1);
    linkedListTraversal(head);
    return 0;
}