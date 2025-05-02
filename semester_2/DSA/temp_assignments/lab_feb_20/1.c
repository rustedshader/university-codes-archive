#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insert_ll(struct Node *head, struct Node *to_add)
{
    struct Node *curr = head;
    while (curr != NULL)
    {
        curr = curr->next;
    }
    to_add->next = NULL;
    to_add->data = 72;
    curr->next = to_add;
}

int main()
{
    struct Node *head;
    struct Node *node_2;
    struct Node *to_add;
    head = (struct Node *)malloc(sizeof(struct Node));
    node_2 = (struct Node *)malloc(sizeof(struct Node));
    to_add = (struct Node *)malloc(sizeof(struct Node));
    head->data = 69;
    head->next = node_2;
    node_2->data = 70;
    node_2->next = NULL;
    insert_ll(head, to_add);
}