#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node* reverse_dll(struct Node *head){
    struct Node *temp = head;
    struct Node *prev = NULL;
    while(temp != NULL){
        struct Node *nxt = temp->next;
        temp->next = prev;
        prev = temp;
        temp->prev = nxt;
        temp = nxt;
    }
    return prev; 
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
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    head->data = 5;
    head->next = second;
    head->prev = NULL;
    second->data = 6;
    second->next = third;
    second->prev = head;
    third->data = 7;
    third->next = NULL;
    print_ll(head);
    head = reverse_dll(head); 
    printf("\n\n");
    print_ll(head);
    
}