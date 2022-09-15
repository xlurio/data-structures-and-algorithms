#include "tree.h"

int main()
{
    printf("Creating a tree...\n");

    struct TreeNode *some_node = create_node(6);

    printf("%i", some_node->value);

    printf("\nTree created!\n");
    printf("\n************************\n");
    printf("Adding nodes..\n");

    some_node->left_child = create_node(5);
    some_node->right_child = create_node(4);

    printf("  %i\n", some_node->value);
    printf(" / \\\n");
    printf("%i   %i\n",
           some_node->left_child->value,
           some_node->right_child->value);

    return 0;
}