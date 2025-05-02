// Write a program to count the total number of nodes in a linked list.

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

int number_of_nodes(struct Node *head)
{
    struct Node *curr = head;
    int count = 0;

    while (curr != NULL)
    {
        curr = curr->next;
        count += 1;
    }
    return count;
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
    int count = number_of_nodes(head);
    printf("%d\n", count);
}