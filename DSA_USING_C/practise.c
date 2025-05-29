// // Insertion at the end of singly linkedlist
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct Node
// {
//     int data;
//     struct Node *next;
// } Node;
// int main()
// {
//     Node *head = NULL;
//     Node *temp = NULL;
//     Node *newNode;
//     int newData;
//     for (int i = 0; i <= 4; i++)
//     {
//         newNode = (Node *)malloc(sizeof(Node));
//         if (head == NULL)
//         {
//             printf("Enter Data : ");
//             scanf("%d", &newData);
//             newNode->data = newData;
//             head = newNode;
//             newNode->next = NULL;
//             temp = head;
//         }
//         else
//         {
//             printf("Enter Data : ");
//             scanf("%d", &newData);
//             temp->next = newNode;
//             newNode->data = newData;
//             newNode->next = NULL;
//             temp = newNode;
//         }
//     }
//     temp = head;
//     printf("\n\n************** Priting Node**************\n\n");
//     while (temp != NULL)
//     {
//         printf("%d \t", temp->data);
//         temp = temp->next;
//     }
//     return 0;
// }

// Here's how to insert a new node at the end of a singly linked list in C using functions:
// #include <stdio.h>
// #include <stdlib.h>

// // Structure for a node
// struct Node
// {
//     int data;
//     struct Node *next;
// };

// // Function to insert a node at the end of the linked list
// void insertAtEnd(struct Node **head_ref, int new_data)
// {
//     // Allocate memory for the new node
//     struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
//     if (new_node == NULL)
//     {
//         printf(stderr, "Memory allocation failed\n");
//         return; // Exit if memory allocation fails
//     }

//     // Assign data to the new node and set next to NULL
//     new_node->data = new_data;
//     new_node->next = NULL;

//     // If the list is empty, the new node becomes the head
//     if (*head_ref == NULL)
//     {
//         *head_ref = new_node;
//         return;
//     }

//     // Traverse to the last node
//     struct Node *last = *head_ref;
//     while (last->next != NULL)
//     {
//         last = last->next;
//     }

//     // Attach the new node to the end
//     last->next = new_node;
// }

// // Function to print the linked list
// void printList(struct Node *node)
// {
//     while (node != NULL)
//     {
//         printf("%d ", node->data);
//         node = node->next;
//     }
//     printf("\n");
// }

// // Main function
// int main()
// {
//     struct Node *head = NULL;

//     // Insert nodes at the end
//     insertAtEnd(&head, 10);
//     insertAtEnd(&head, 20);
//     insertAtEnd(&head, 30);

//     // Print the linked list
//     printf("Linked list: ");
//     printList(head);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// typedef struct
// {
//     int data;
//     struct Node *next;
// } Node;
// Node *create()
// {
// }
// int main()
// {
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int data;
    struct Node *next;
} Node;
int main()
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = 10;
    node->next = NULL;
    free(node);
    printf("%p\n", node);
}