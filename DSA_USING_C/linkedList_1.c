#include <stdio.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
int main()
{
    Node n1, n2, n3, n4, n5;
    Node *head, *temp;
    n1.data = 10;
    n1.next = &n2;
    n2.data = 20;
    n2.next = &n3;
    n3.data = 30;
    n3.next = &n4;
    n4.data = 40;
    n4.next = &n5;
    n5.data = 50;
    n5.next = NULL;
    head = &n1;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ,", temp->data);
        temp = temp->next;
    }

    return 0;
}