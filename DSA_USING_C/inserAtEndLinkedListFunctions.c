#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
void createList(Node **head, Node **temp, Node *newNode, int newData)
{
    newNode->data = newData;
    newNode->next = NULL;
    if (*head == NULL)
    {

        *head = newNode;
        *temp = newNode;
    }
    else
    {
        (*temp)->next = newNode;
        *temp = newNode;
    }
}
void printNode(Node **head, Node **temp)
{
    *temp = *head;
    while ((*temp) != NULL)
    {
        printf("%d ", (*temp)->data);
        (*temp) = (*temp)->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *temp = NULL;
    Node *newNode;
    int newData;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter data %d : ", i + 1);
        scanf("%d", &newData);
        newNode = (Node *)malloc(sizeof(Node));
        createList(&head, &temp, newNode, newData);
    }
    printNode(&head, &temp);
    // int newData;
}