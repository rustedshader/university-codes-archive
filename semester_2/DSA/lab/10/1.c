#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *left;
    struct Node *right;
};

void inorder(struct Node *root)
{
    if (root)
    {
        inorder(root->left);
        printf("%d\n", root->val);
        inorder(root->right);
    }
}
void preorder(struct Node *root)
{
    if (root)
    {
        printf("%d\n", root->val);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct Node *root)
{
    if (root)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\n", root->val);
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
    return 0;
}
