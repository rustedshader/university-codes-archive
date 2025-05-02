#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int check_if_dupl(struct Node *head, int data) {
    struct Node *temp = head;
    int count = 0;
    while (temp != NULL) {
        if (temp->data == data) {
            count += 1;
        }
        temp = temp->next;
    }
    if (count > 1) {
        return 1;
    }
    return -1;
}

void remove_duplicate(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL && temp->next != NULL) {
        struct Node *prev = temp;
        struct Node *curr = temp->next;
        while (curr != NULL) {
            if (curr->data == temp->data) {
                prev->next = curr->next;
                free(curr); 
                curr = prev->next;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        temp = temp->next;
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

int main(){
struct Node *head = (struct Node*)malloc(sizeof(struct Node));
struct Node *first = (struct Node*)malloc(sizeof(struct Node));
struct Node *second = (struct Node*)malloc(sizeof(struct Node));
head->data = 5;
head->next = first;
first->data = 6;
first->next = second;
second->data = 6;
second->next = NULL;
remove_duplicate(head);
print_ll(head);
}