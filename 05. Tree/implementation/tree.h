#include <stdlib.h>
#include <stdio.h>

struct BinaryTree
{
    struct BinaryTree *left_child;
    struct BinaryTree *right_child;
    int value;
};

struct BinaryTree *create_node(int node_value)
{
    struct BinaryTree *new_node =
        (struct BinaryTree *)malloc(sizeof(struct BinaryTree));

    new_node->value = node_value;
    new_node->left_child = NULL;
    new_node->right_child = NULL;

    return new_node;
}