// Write a C program to insert a node at the beginning of a singly linked list and display the list.

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *insert(struct Node *head, int data)
{
    struct Node *to_add;
    to_add = (struct Node *)malloc(sizeof(struct Node));
    to_add->data = data;
    to_add->next = head;
    return to_add;
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
    head = insert(head, 6);
    head = insert(head, 7);
    print_ll(head);
    free(head);
}