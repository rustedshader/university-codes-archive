#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Node
{
    int val;
    struct Node *left;
    struct Node *right;
};

int arr[MAX_SIZE];
int global_arr_index = 0;

void inorder(struct Node *root)
{
    if (root)
    {
        inorder(root->left);
        arr[global_arr_index] = root->val;
        global_arr_index += 1;
        inorder(root->right);
    }
}
int main()
{
    struct Node *root = (struct Node *)malloc(sizeof(struct Node));
    struct Node *left = (struct Node *)malloc(sizeof(struct Node));
    struct Node *right = (struct Node *)malloc(sizeof(struct Node));
    struct Node *left1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *right1 = (struct Node *)malloc(sizeof(struct Node));
    root->val = 5;
    root->right = right;
    root->right->val = 69;
    root->left = left;
    root->left->val = 44;
    root->left->left = left1;
    root->left->left->val = 7;
    root->left->right = right1;
    root->left->right->val = 19;
    inorder(root);
    for (int i = 0; i < global_arr_index; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
