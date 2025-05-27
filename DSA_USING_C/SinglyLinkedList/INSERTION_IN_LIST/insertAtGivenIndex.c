#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
int findLength(Node **head)
{
    Node *temp = *head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
Node *createList(Node **head)
{
    // printf("Address : %s\n", (*head));
    Node *newNode;
    int data;
    Node *temp;
    newNode = (Node *)malloc(sizeof(Node));
    printf("Enter Data : ");
    scanf("%d", &data);
    newNode->data = data;
    if (*head == NULL)
    {
        newNode->next = NULL;
    }
    else
    {
        newNode->next = *head;
    }
    *head = newNode;
    return *head;
}
Node *insertAfterGivenIndex(Node **head, int index)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    Node *temp = *head;
    int data;
    int count = 0;
    printf("Enter Data : ");
    scanf("%d", &data);
    newNode->data = data;
    if (index > 0 && index <= findLength(&(*head)) + 1)
    {
        if (index == 0)
        {
            newNode->next = *head;
            *head = newNode;
        }
        else if (index == findLength(&(*head)) + 1)
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            newNode->next = NULL;
            temp->next = newNode;
        }
        else
        {
            temp = *head;
            while (count < (index - 1))
            {
                temp = temp->next;
                count++;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
    else
    {
        printf("Invalid Index\n");
    }
    return *head;
}
void displayList(Node **head)
{
    printf("\n\nYour List is : \n");
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
    printf("Insert First 5 Nodes : \n\n");
    for (int i = 0; i < 5; i++)
    {
        head = createList(&head);
    }
    displayList(&head);
    int index;
    printf("\n\nEnter the index Where you want to insert node : ");
    scanf("%d", &index);
    head = insertAfterGivenIndex(&head, index);
    displayList(&head);
    return 0;
}