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
Node *removeAtGivenIndex(Node **head)
{
    int index;
    printf("\nEnter Index where Item to be removed : ");
    scanf("%d", &index);
    Node *prev = *head;
    Node *next = *head;
    int count = 0;
    while (count < index)
    {
        count++;
        if (next == prev)
        {
            next = next->next;
        }
        else
        {
            next = next->next;
            prev = prev->next;
        }
    }
    prev->next = next->next;
    free(next);
    return *head;
}
int main()
{
    Node *head = NULL;
    for (int i = 0; i < 5; i++)
    {
        head = createList(&head);
    }
    printf("\nBefore Deletion : ");
    printList(&head);
    head = removeAtGivenIndex(&head);
    printf("\nAfter  Deletion: ");
    printList(&head);
}