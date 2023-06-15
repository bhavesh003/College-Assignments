#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node *create(struct node *root, int x)
{
    if (root == NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));
        root->data = x;
        root->left = root->right = NULL;
        return (root);
    }
    else if (x < root->data)
    {
        root->left = create(root->left, x);
    }
    else
        root->right = create(root->right, x);
    return (root);
}
int countL(struct node *root)
{
    int c = 0;
    if (root == NULL)
    {
        return (0);
    }
    if (root->left == NULL && root->right == NULL)
        return (1);
    c = countL(root->left) + countL(root->right);
    return (c);
}
int countAll(struct node *root)
{
    int c = 0;
    if (root == NULL)
    {
        return (0);
    }
    c = 1 + countAll(root->left) + countAll(root->right);
    return (c);
}
int countNL(struct node *root)
{
    int c = 0;
    if (root == NULL)
    {
        return (0);
    }
    if (root->left == NULL && root->right == NULL)
        return (0);
    return (1 + countNL(root->left) + countNL(root->right));
}