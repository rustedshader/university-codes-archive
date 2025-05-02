#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int sizeof_ll(struct Node *head)
{
    struct Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {

        length += 1;
        temp = temp->next;
    }

    return length;
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

struct Node *insert_at_alternate(struct Node *head, struct Node *head_two, int length)
{
    struct Node *head_three = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp_three = head_three;
    int cou

        ;
    struct Node *temp = head;
    struct Node *temp_two = head_two;

    while (temp != NULL || temp_two != NULL)
    {
        if (temp != NULL)
        {
            temp_three->next = temp;
            temp = temp->next;
            temp_three = temp_three->next;
        }
        if (temp_two != NULL)
        {
            temp_three->next = temp_two;
            temp_two = temp_two->next;
            temp_three = temp_three->next;
        }
    }

    temp_three->next = NULL;
    return head_three->next;
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *head_2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *first_2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second_2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *head_three = (struct Node *)malloc(sizeof(struct Node));

    head->data = 5;
    head->next = first;
    first->data = 6;
    first->next = second;
    second->data = 7;
    second->next = NULL;
    head_2->data = 8;
    head_2->next = first_2;
    first_2->data = 9;
    first_2->next = second_2;
    second_2->data = 10;
    second_2->next = NULL;
    int size = sizeof_ll(head);
    head_three = insert_at_alternate(head, head_2, size);
    print_ll(head_three);
}