#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node
{
    int data;
    struct Node *next;
};

// Function to print the linked list
void printList(struct Node *head)
{
    struct Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode = NULL;
    int n, data, i;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node)); // allocate memory
        if (newNode == NULL)
        {
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL)
        {
            // First node becomes the head
            head = newNode;
            temp = head;
        }
        else
        {
            // Link the new node at the end
            temp->next = newNode;
            temp = temp->next;
        }
    }

    // Print the linked list
    printList(head);

    // Free allocated memory
    temp = head;
    while (temp != NULL)
    {
        struct Node *next = temp->next;
        free(temp);
        temp = next;
    }

    return 0;
}
