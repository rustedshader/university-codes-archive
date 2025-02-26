// Write a C program to create a singly linked list. The program should allow the user to insert nodes at the end and then display the linked list.

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insert(struct Node *head, int data)
{
    struct Node *curr = head;

    if (curr->next == NULL)
    {
        struct Node *to_add;
        to_add = (struct Node *)malloc(sizeof(struct Node));
        to_add->data = data;
        to_add->next = NULL;
        curr->next = to_add;
        return;
    }

    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    struct Node *to_add;
    to_add = (struct Node *)malloc(sizeof(struct Node));
    to_add->data = data;
    to_add->next = NULL;
    curr->next = to_add;
    return;
}

void print_ll(struct Node *head)
{
    struct Node *curr = head;

    while (curr != NULL)
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }
    return;
}

int main()
{
    struct Node *head;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 5;
    head->next = NULL;
    insert(head, 6);
    insert(head, 7);
    insert(head, 8);
    print_ll(head);
}