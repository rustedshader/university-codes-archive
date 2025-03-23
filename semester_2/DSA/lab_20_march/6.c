#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *push(struct Node *head , int data){
    struct Node *new_head = (struct Node *)malloc(sizeof(struct Node));
    new_head->data = data;
    new_head->next = head;
    return new_head;
}

struct Node *pop(struct Node *head){
    struct Node *next = head->next;
    return next;
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

int main(){
struct Node *head = (struct Node*)malloc(sizeof(struct Node));
struct Node *first = (struct Node*)malloc(sizeof(struct Node));
struct Node *second = (struct Node*)malloc(sizeof(struct Node));
head->data = 5;
head->next = NULL;
head = push(head,6);
head = push(head,7);
head = push(head,8);
print_ll(head);
printf("\n\n");
head = pop(head);
head = pop(head);
print_ll(head);
}