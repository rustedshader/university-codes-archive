#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

void print_ll(struct Node *head){
  while(head != NULL){
    printf("%d\n",head->data);
    head = head->next;
  }
}


struct Node* delete_head(struct Node *head){
struct Node *temp = head;
head = head->next;
free(temp);
return head;
}

struct Node* reverse_linked_list(struct Node *head){
  struct Node *prev;
  struct Node *next;
  while(head != NULL){
  next = head->next;
  head->next = prev;
  prev = head;
  head = next;
  }
  return prev;
  
}

void delete_node(struct Node *head , struct Node *node_to_delete){
  if (node_to_delete == NULL){
    struct Node *temp = head;
    head = head->next;
    free(temp);
    return;
  }
  struct Node *prev;
  struct Node *current =  head;

  while(current != NULL && current != node_to_delete){
    prev = current;
    current = current->next;
  }

  if(current != NULL){
  prev->next = current->next;
  free(current);
  }

}

int main(){
  struct Node *root = (struct Node *)malloc(sizeof(struct Node));
  struct Node *first_node = (struct Node *)malloc(sizeof(struct Node));
  struct Node *second_node = (struct Node *)malloc(sizeof(struct Node));

  root->data = 5;
  root->next = first_node;
  first_node->data = 7;
  first_node->next = second_node;
  second_node->data = 1;
  second_node->next = NULL;

  // delete_node(root,first_node);
  // struct Node *new_root = delete_head(root);
  struct Node *rev_ll = reverse_linked_list(root);
  print_ll(rev_ll);

}