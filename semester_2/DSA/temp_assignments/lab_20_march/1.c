#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};


int sizeof_ll(struct Node *head){
    struct Node *temp = head;
    int length = 0;
    while(temp != NULL){

        length += 1;
        temp = temp->next;

    }

    return length;
}

void print_pos(struct Node *head, int pos){
    struct Node *temp = head;
    int length = 0;
    while(temp != NULL && length != pos){

        length += 1;
        temp = temp->next;

    }
    printf("%d\n",temp->data);

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
second->next = NULL;
int size = sizeof_ll(head);
int middle = size / 2;
print_pos(head,middle);


}