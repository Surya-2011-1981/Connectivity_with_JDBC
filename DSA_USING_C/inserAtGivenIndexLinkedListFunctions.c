#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
void createList(Node **head, Node **temp, Node *newNode, int data)
{
    // int data;
    newNode->data = data;
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        (*temp)->next = newNode;
        // newNode->next = NULL;
        // *temp = newNode;
    }
    *temp = newNode;
    newNode->next = NULL;
}
void insertNode(Node **head, int position)
{
    int newData;
    int countPos = 0;
    Node *temp = *head;
    Node *pre = *head;
    printf("Enter The Data : ");
    scanf("%d", &newData);
    Node *newNode = (Node *)malloc(sizeof(Node));
    while (temp != NULL)
    {
        if (*head != temp)
        {
            pre = pre->next;
        }
        if (countPos == position)
        {
            newNode->data = newData;
            newNode->next = temp;
            temp = newNode;
            pre->next = newNode;
            return;
        }
        temp = temp->next;
        countPos++;
    }
    printf("Inseted Successfully..");
}
void displayList(Node **head)
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
    int newdata;
    int position;
    Node *head = NULL;
    Node *newNode;
    Node *temp = NULL;
    printf("Enter some data in the linked List : \n");
    for (int i = 0; i < 5; i++)
    {
        newNode = (Node *)malloc(sizeof(Node));
        printf("Enter Data %d : ", i + 1);
        scanf("%d", &newdata);
        createList(&head, &temp, newNode, newdata);
    }

    printf("Initial Data Inserted SuccessFully...\n");
    printf("\n Enter the position where you want to insert the Data :");
    scanf("%d", &position);
    insertNode(&head, position);
    displayList(&head);
    return 0;
}