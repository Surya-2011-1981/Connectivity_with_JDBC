#include "../include/dll_basics.h"
#include <stdio.h>
#include <stdlib.h>

Node *createList(Node **head)
{
    int data;
    Node *newNode, *temp;
    newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return *head;
    }

    printf("Enter Data for New Node: ");
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
        // Add Node at End
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
    printf("List contents: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
