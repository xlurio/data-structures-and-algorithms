#include <stdlib.h>
#include <stdio.h>

struct Stack
{
    int last_index;
    int capacity;
    int *stack_elements;
};

struct Stack *create_stack(int capacity)
{
    if (capacity < 1)
    {
        return create_stack(1);
    }

    struct Stack *new_stack = (struct Stack *)malloc(sizeof(struct Stack));
    new_stack->last_index = -1;
    new_stack->capacity = capacity;
    new_stack->stack_elements = (int *)malloc(capacity * sizeof(short));
}

int is_stack_full(struct Stack **stack_to_check)
{
    int next_element = (*stack_to_check)->last_index + 1;
    int capacity = (*stack_to_check)->capacity;
    return next_element == capacity;
}

int is_stack_empty(struct Stack **stack_to_check)
{
    return (*stack_to_check)->last_index == -1;
}

void push_to_stack(int item_to_push, struct Stack **stack_to_push_to)
{
    if (is_stack_full(stack_to_push_to))
    {
        printf("End of stack");
        return;
    }

    (*stack_to_push_to)->last_index++;
    (*stack_to_push_to)->stack_elements[(*stack_to_push_to)->last_index] = item_to_push;
}

int pop(struct Stack **stack_to_push_to)
{
    if (is_stack_empty(stack_to_push_to))
    {
        printf("Stack empty");
        return -1;
    }

    int item_deleted =
        (*stack_to_push_to)->stack_elements[(*stack_to_push_to)->last_index];

    (*stack_to_push_to)->stack_elements[(*stack_to_push_to)->last_index] = 0;
    (*stack_to_push_to)->last_index--;

    return item_deleted;
}

int peek_from_stack(struct Stack **stack_to_push_to)
{
    if (is_stack_empty(stack_to_push_to))
    {
        printf("Stack empty");
        return -1;
    }

    return (*stack_to_push_to)->stack_elements[(*stack_to_push_to)->last_index];
}