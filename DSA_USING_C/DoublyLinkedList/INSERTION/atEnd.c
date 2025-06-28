#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
} Node;

Node *createList(Node **head, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    if (*head == NULL)
    {
        newNode->next = NULL;
        newNode->prev = NULL;
        *head = newNode;
    }
    else
    {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
    return *head;
}
void printList(Node **head)
{
    Node *temp = *head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

Node *insertAtEnd(Node **head, int data)
{
    Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = temp;
    temp->next = newNode;
    return *head;
}

int main()
{
    Node *head = NULL;
    int data;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter data for node : ");
        scanf("%d", &data);
        head = createList(&head, data);
    }
    printf("\nList Before Insertion : ");
    printList(&head);
    printf("\n\nEnter the data to insert : ");
    scanf("%d", &data);
    insertAtEnd(&head, data);
    printf("\n\nList After Insertion : ");
    printList(&head);
    return 0;
}