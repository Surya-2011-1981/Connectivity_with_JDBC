#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *createList(Node **head)
{
    Node *temp = *head;
    int data;
    Node *newNode = (Node *)malloc(sizeof(Node));
    printf("Data : ");
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
int main()
{
    Node *head = NULL;
    for (int i = 0; i < 5; i++)
    {
        head = createList(&head);
    }
    printList(&head);
    return 0;
}