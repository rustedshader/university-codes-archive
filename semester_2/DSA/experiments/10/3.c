#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *left;
    struct Node *right;
};

int numberOfNodes(struct Node *root)
{
    if (!root)
    {
        return 0;
    }
    else if (!root->left && !root->right)
    {
        return 1;
    }
    else
    {
        int left = numberOfNodes(root->left);
        int right = numberOfNodes(root->right);
        return (1 + left + right);
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
    int nodes = numberOfNodes(root);
    printf("%d\n", nodes);
}