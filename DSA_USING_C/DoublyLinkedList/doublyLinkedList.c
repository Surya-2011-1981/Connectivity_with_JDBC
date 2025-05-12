// Insertion At the end of the node
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    struct Node *pre;
    int data;
    struct Node *next;

} Node;
int main()
{
    Node *head = NULL;
    Node *temp = NULL;
    Node *newNode;
    int newData;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Data in Node %d : ", i);
        scanf("%d", &newData);
        newNode = (Node *)malloc(sizeof(Node));
        newNode->data = newData;
        if (head == NULL)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            newNode->pre = temp;
            temp = newNode;
        }
        newNode->next = NULL;
    }

    // Printing data
    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }

    return 0;
}