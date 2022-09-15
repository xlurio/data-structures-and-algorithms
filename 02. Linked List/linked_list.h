#include <stdio.h>

struct Node
{
    int item;
    struct Node *next;
};

void _go_to_next(struct Node **node_to_advance);

void print_linked_list(struct Node **node_to_iterate)
{
    struct Node *current_node = (struct Node *)malloc(sizeof(struct Node));
    current_node->item = (*node_to_iterate)->item;
    current_node->next = (*node_to_iterate)->next;

    while (current_node != NULL)
    {
        printf("%i -> ", current_node->item);
        _go_to_next(&current_node);
    }
}

void _go_to_next(struct Node **node_to_advance)
{
    int is_node_null = (*node_to_advance) == NULL;
    int is_next_node_null = (*node_to_advance)->next == NULL;

    if (!is_node_null & !is_next_node_null)
    {
        (*node_to_advance)->item = (*node_to_advance)->next->item;
        (*node_to_advance)->next = (*node_to_advance)->next->next;
        return;
    }

    (*node_to_advance) = NULL;
}

void add_before_node(int item_to_add, struct Node **node_after)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->item = item_to_add;
    new_node->next = (*node_after);

    (*node_after) = new_node;
}

void add_after_node(int item_to_add, struct Node **node_before)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->item = item_to_add;
    new_node->next = (*node_before)->next;
    (*node_before)->next = new_node;
}

void add_at_end(int item_to_add, struct Node **node_before)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->item = item_to_add;
    new_node->next = NULL;

    if (*node_before == NULL)
    {
        (*node_before) = new_node;
        return;
    }

    struct Node *current_node = *node_before;

    while (current_node->next != NULL)
    {
        current_node = current_node->next;
    }

    current_node->next = new_node;
}

void delete_from_linked_list_at(struct Node **beginning, int index_to_delete)
{
    if (index_to_delete == 0)
    {
        *beginning = (*beginning)->next;
        return;
    }

    struct Node *current_node = *beginning;

    for (int current_index = 0; current_index < (index_to_delete - 1); current_index++)
    {
        if (current_node->next == NULL)
        {
            printf("The element to delete was not found");
            return;
        }
        current_node = current_node->next;
    }

    if (current_node->next->next != NULL)
    {
        current_node->next = current_node->next->next;
        return;
    }

    current_node->next = NULL;
}

int is_element_in_linked_list(int item_to_search, struct Node **beginning_node)
{
    if ((*beginning_node)->item == item_to_search)
    {
        return 1;
    }

    struct Node *current_node = *beginning_node;

    while (current_node->next != NULL)
    {
        if (current_node->item == item_to_search)
        {
            return 1;
        }

        current_node = current_node->next;
    }

    return 0;
}