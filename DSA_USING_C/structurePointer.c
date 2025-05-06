#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
int main()
{
    Node *firstNode = (struct Node *)malloc(sizeof(struct Node));
    Node *secondNode = (struct Node *)malloc(sizeof(struct Node));
    firstNode->data = 10;
    firstNode->next = secondNode;
    secondNode->data = 20;
    secondNode->next = NULL;

    // Printing the linked list
    struct Node *currentNode = firstNode;
    while (currentNode != NULL)
    {
        printf("%d -> ", currentNode->data);
        currentNode = currentNode->next;
    }

    return 0;
}