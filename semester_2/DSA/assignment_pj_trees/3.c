#include <stdio.h>
#include <stdlib.h>

struct Node{
	int val;
	struct Node *right;
	struct Node *left;
};

void add_node(struct Node *root , int left_val , int right_val){
	struct Node *left = (struct Node*)malloc(sizeof(struct Node));
	left->val = left_val;
	struct Node *right = (struct Node*)malloc(sizeof(struct Node));
	right->val = right_val;
	root->left = left;
	root->right = right;
}


void traversal(struct Node *root){
if (root->left){
traversal(root->left);
}
printf("%d\n",root->val);
if(root->right){
traversal(root->right);
}

}

int main(){
	struct Node *root = (struct Node*)malloc(sizeof(struct Node));
	root->val = 1;
	add_node(root,5,6);
	add_node(root->left,7,8);
	traversal(root);
}
