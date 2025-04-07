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

int max_height = 0;
void my_dfs(struct Node *root,int height){
		if (root){
			if (height > max_height){
				max_height = height;
			}
			if (root->left){
				my_dfs(root->left,height+1);
			}
			if (root->right){
				my_dfs(root->right,height+1);
			}
		}


	}



int main(){
	struct Node *root = (struct Node*)malloc(sizeof(struct Node));
	add_node(root,5,6);
	add_node(root->left,7,8);
	my_dfs(root,0);
	printf("Max Depth: %d\n",max_height);
}
