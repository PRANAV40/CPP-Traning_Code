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

    linkedListTraversal(head);
    return 0;
}
