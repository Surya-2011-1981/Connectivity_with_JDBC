#pragma once

typedef struct Node
{
    struct Node *pre;
    int data;
    struct Node *next;
} Node;

Node *createList(Node **head);
void printList(Node **head);
