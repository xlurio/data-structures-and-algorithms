#include <stdlib.h>
#include "linked_list.h"

int main(void)
{
    printf("Creating a linked list...\n");

    struct Node *linked_list;

    linked_list = (struct Node *)malloc(sizeof(struct Node));
    linked_list->item = 0;
    linked_list->next = NULL;

    print_linked_list(&linked_list);

    printf("\nLinked list created!\n");

    printf("\n************************\n");

    printf("\nAdding an item before node...\n");

    add_before_node(5, &linked_list);
    print_linked_list(&linked_list);

    printf("\nItem added!\n");

    printf("\n************************\n");

    printf("\nAdding an item after node...\n");

    add_after_node(8, &linked_list);
    print_linked_list(&linked_list);

    printf("\nItem added!\n");

    printf("\n************************\n");

    printf("\nAdding an item at the end...\n");

    add_at_end(12, &linked_list);
    print_linked_list(&linked_list);

    printf("\nItem added!\n");

    printf("\n************************\n");

    printf("\nDeleting item at index 2...\n");

    delete_from_linked_list_at(&linked_list, 2);
    print_linked_list(&linked_list);

    printf("\nItem deleted!\n");

    printf("\n************************\n");

    printf("\nSearching 8 inside the linked list...\n");

    if (is_element_in_linked_list(8, &linked_list))
    {
        printf("\nItem found!\n");
    }

    free(linked_list);
    return 0;
}
