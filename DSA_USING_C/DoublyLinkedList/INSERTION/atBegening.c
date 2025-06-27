#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    struct Node *pre;
    int data;
    struct Node *next;
} Node;
Node *createList(Node **head)
{
    int data;
    Node *newNode, *temp;
    newNode = (Node *)malloc(sizeof(Node));
    printf("Enter Data for New Node : ");
    scanf("%d", &data);
    newNode->data = data;
    temp = *head;
    if (*head == NULL)
    {
        newNode->pre = NULL;
        newNode->next = NULL;
        *head = newNode;
    }
    else
    {
        // Suppose to add Node at End
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        newNode->pre = temp;
        temp->next = newNode;
        newNode->next = NULL;
    }
    return *head;
}
void printList(Node **head)
{
    Node *temp = *head;
    while (temp != NULL)
    {
        printf("%d , ", temp->data);
        temp = temp->next;
    }
}