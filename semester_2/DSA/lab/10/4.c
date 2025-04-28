#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *left;
    struct Node *right;
};

void printAllPaths(struct Node *root)
{
    if (!root)
    {
        printf("None-");
    }
    else
    {
        printf("%d-", root->val);
        printAllPaths(root->left);
        printAllPaths(root->right);
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
    printAllPaths(root);
}