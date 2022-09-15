#include <stdlib.h>
#include <stdio.h>

struct TreeNode
{
    struct TreeNode *left_child;
    struct TreeNode *right_child;
    int value;
};

struct TreeNode *create_node(int node_value)
{
    struct TreeNode *new_node =
        (struct TreeNode *)malloc(sizeof(struct TreeNode));

    new_node->value = node_value;
    new_node->left_child = NULL;
    new_node->right_child = NULL;

    return new_node;
}