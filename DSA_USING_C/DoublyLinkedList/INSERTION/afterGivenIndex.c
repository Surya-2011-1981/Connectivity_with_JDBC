#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;

} Node;

int countLength(Node **head)
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

Node *atGivenIndex(Node **head, int data, int index)
{
    if (*head != NULL)
    {
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;
        if (index == 0)
        {
            newNode->next = *head;
            newNode->prev = NULL;
            (*head)->next = NULL;
            (*head)->prev = newNode;
            *head = newNode;
            return *head;
        }
        else if (index == 1)
        {
            newNode->next = NULL;
            newNode->prev = *head;
            (*head)->next = newNode;
            return *head;
        }
        else if (index == countLength(&(*head)))
        {
            Node *temp = *head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            newNode->next = NULL;
            newNode->prev = temp;
            temp->next = newNode;
            return *head;
        }
        else
        {
            // Node *newNode = (Node *)malloc(sizeof(Node));
            int count = 0;
            Node *temp = *head;
            // newNode->data = data;
            while (count != index - 1)
            {
                if (temp->next == NULL)
                {
                    printf("Invalid Index...");
                    return *head;
                }
                temp = temp->next;
                count++;
            }
            newNode->prev = temp;
            newNode->next = temp->next;
            (temp->next)->prev = newNode;
            temp->next = newNode;
        }
    }
    else
    {
        if (index != 0)
        {
            printf("InValid Index...");
        }
        else
        {
            printf("\nReached\n");
            Node *newNode = (Node *)malloc(sizeof(Node));
            newNode->data = data;
            newNode->next = NULL;
            newNode->prev = NULL;
            *head = newNode;
        }
    }
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
    int index;
    printf("\n\nEnter the index to insert : ");
    scanf("%d", &index);

    head = atGivenIndex(&head, data, index);
    printf("\n\nList After Insertion : ");
    printList(&head);
    return 0;
}