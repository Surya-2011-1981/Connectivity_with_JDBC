// #include <stdio.h>
// #include <stdlib.h>
// typedef struct Node
// {
//     int data;
//     struct Node *next;
// } Node;
// int main()
// {
//     Node *one = (Node *)malloc(sizeof(Node));
//     Node *two = (Node *)malloc(sizeof(Node));
//     one->data = 10;
//     one->next = NULL;
//     two->data = 20;
//     two->next = one;

//     Node *head = two;
//     Node *newNode;
//     int newData;
//     for (int i = 0; i < 5; i++)
//     {
//         newNode = (Node *)malloc(sizeof(Node));
//         printf("Enter Data %d : ", i + 1);
//         scanf("%d", &newData);
//         newNode->data = newData;
//         if (head == NULL)
//         {
//             newNode->next = NULL;
//         }
//         else
//         {
//             newNode->next = head;
//         }
//         head = newNode;
//     }
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         printf("%d\t", temp->data);
//         temp = temp->next;
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
void createLinkedList(Node **head, Node *newNode, int newData)
{
    newNode->data = newData;
    if (*head == NULL)
    {
        newNode->next = NULL;
    }
    else
    {
        newNode->next = *head;
    }
    *head = newNode;
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

int main()
{
    Node *newNode;
    Node *head = NULL;
    int newData;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter data %d : ", i + 1);
        scanf("%d", &newData);
        newNode = (Node *)malloc(sizeof(Node));
        createLinkedList(&head, newNode, newData);
    }
    printList(&head);
    return 0;
}