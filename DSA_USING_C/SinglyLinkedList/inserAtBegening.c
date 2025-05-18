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
    newNode->data = newdata;
    newNode->next = NULL;
    if (*head == NULL)
    {
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
Node *insertAtBegening(Node **head)
{
    int new_data;
    Node *newNode = (Node *)malloc(sizeof(Node));
    printf("\nEnter Data to be inserted at begening : ");
    scanf("%d", &new_data);
    newNode->data = new_data;
    newNode->next = *head;
    return *head = newNode;
}
int main()
{
    int data;
    Node *head = NULL;
    printf("Enter 5 space Seperated values : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &data);
        head = createNode(&head, data);
    }
    printList(&head);
    printf("\n**************************************\n");
    head = insertAtBegening(&head);
    printf("\n**************************************\n");
    printList(&head);
    return 0;
}