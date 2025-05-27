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
void insertAtBegining(Node **head)
{
    int data;
    Node *newNode = (Node *)malloc(sizeof(Node));
    printf("\nData : ");
    scanf("%d", &data);
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
int main()
{
    Node *head = NULL;
    for (int i = 0; i < 5; i++)
    {
        head = createList(&head);
    }
    printf("\nBefore Insertion : ");
    printList(&head);
    insertAtBegining(&head);
    printf("\nAfter Insertion : ");
    printList(&head);
}