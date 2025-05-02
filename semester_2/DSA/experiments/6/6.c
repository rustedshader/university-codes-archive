// Write a program to delete all occurance of a given key in the linked list.

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

    if (head == NULL)
    {
        head->data = data;
        head->next = NULL;
        return;
    }

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

void delete_node_all(struct Node *head, int data)
{
    struct Node *curr;
    struct Node *prev;

    curr = head;

    while (curr->next != NULL)
    {
        if (curr->data == data)
        {
            prev->next = curr->next;
            curr = curr->next;
        }
        else
        {

            prev = curr;
            curr = curr->next;
        }
    }
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
    int keepRunning = 1;
    struct Node *head;

    head = (struct Node *)malloc(sizeof(struct Node));

    scanf("%d", &head->data);
    head->next = NULL;

    while (keepRunning)
    {
        int data;
        scanf("%d", &data);
        if (data == -1)
        {
            keepRunning = 0;
        }
        insert(head, data);
    }

    delete_node_all(head, 5);

    print_ll(head);
    free(head);
}