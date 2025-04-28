#include <stdio.h>
#include <stdlib.h>

//  BST tree design and deletion of a node from BST.

struct Node{
	int val;
	struct Node *right;
	struct Node *left;
};


void traversal(struct Node *root){
	if (root->left){
	traversal(root->left);
	}
	printf("%d\n",root->val);
	if(root->right){
	traversal(root->right);
	}
	
	}

struct Node* min_bst(struct Node *root){
	struct Node *current = root;
	while(current && current->left != NULL){
		current = current->left;
	}
	return current;
}

void add_node(struct Node *root , int left_val , int right_val){
	struct Node *left = (struct Node*)malloc(sizeof(struct Node));
	left->val = left_val;
	struct Node *right = (struct Node*)malloc(sizeof(struct Node));
	right->val = right_val;
	root->left = left;
	root->right = right;
}

struct Node* delete_node(struct Node *root, int val){
	if (root == NULL){
		return root;	
	}
	
	if (val < root->val ){
		root->left = delete_node(root->left,val);
	} else if (val > root->val){
		root->right = delete_node(root->right,val);
	} else {
		if (root->left == NULL){
			struct Node* temp = root->right;
			return temp;
		} else if (root->right == NULL ){
			struct Node* temp = root->left;
			return temp;
		}
		struct Node* temp = min_bst(root->right);
		root->val = temp->val;
		root->right = delete_node(root->right,temp->val);
	}

	return root;
}

int main(){
	struct Node *root = (struct Node*)malloc(sizeof(struct Node));
	root->val = 5;
	add_node(root,4,7);
	add_node(root->right,6,8);
	traversal(root);
	delete_node(root,4);
	printf("\n");
	traversal(root);
}