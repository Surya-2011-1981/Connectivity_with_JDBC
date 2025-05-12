#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *createNode(Node **head, int newdata)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    // Node *temp;
    newNode->data = newdata;
    newNode->next = NULL;
    if (*head == NULL)
    {
        // newNode->next = NULL;
        *head = newNode;
    }
    else
    {
        Node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return *head;
}
void printList(Node **head)
{
    Node *temp = *head;
    while (temp != NULL)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }
}
int main()
{
    int data;
    Node *head = NULL;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &data);
        head = createNode(&head, data);
    }
    printList(&head);
    return 0;
}