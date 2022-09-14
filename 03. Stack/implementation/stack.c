#include "stack.h"

int main(void)
{
    printf("Creating a stack...\n");

    struct Stack *some_stack = create_stack(5);

    printf("\nStack created!\n");

    printf("\n************************\n");

    printf("\nAdding an item...\n");

    push_to_stack(2, &some_stack);
    printf("Item %i added!\n", peek_from_stack(&some_stack));

    push_to_stack(5, &some_stack);
    printf("Item %i added!\n", peek_from_stack(&some_stack));

    printf("\n************************\n");

    printf("\nDeleting an item...\n");

    printf("Item %i deleted!\n", pop(&some_stack));

    return 0;
}