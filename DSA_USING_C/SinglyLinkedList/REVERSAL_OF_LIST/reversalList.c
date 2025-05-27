#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *createList(Node **head)
{
    int data;
    Node *newNode = (Node *)malloc(sizeof(Node));
    Node *temp = *head;
    printf("Enter data of New Node : ");
    scanf("%d", &data);
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        temp = newNode;
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
Node *reverseList(Node **head)
{
    Node *newHead;
    while ((*head)->next != NULL)
    {
        Node *prePointer = *head;
        Node *nextPointer = *head;
        if (prePointer == nextPointer)
        {
            nextPointer = nextPointer->next;
        }
        while (nextPointer->next == NULL)
        {
            nextPointer = nextPointer->next;
            prePointer = prePointer->next;
        }
        nextPointer->next = *head;
        newHead = nextPointer;
        prePointer->next = NULL;
    }
}
int main()
{
    Node *head = NULL;
    for (int i = 0; i < 5; i++)
    {
        head = createList(&head);
    }
    printf("\nBefore Reversal : ");
    printList(&head);
    reverseList(&head);
    printf("\nAfter Reversal : ");
    printList(&head);
}