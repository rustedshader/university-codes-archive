#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void print_ll(struct Node *head)
{
    struct Node *curr = head;

    while (curr->next != head)
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }
    printf("%d\n",curr->data);
    return;
}

int main(){
struct Node *head = (struct Node*)malloc(sizeof(struct Node));
struct Node *first = (struct Node*)malloc(sizeof(struct Node));
struct Node *second = (struct Node*)malloc(sizeof(struct Node));
head->data = 5;
head->next = first;
first->data = 6;
first->next = second;
second->data = 7;
second->next = head;
print_ll(head);


}