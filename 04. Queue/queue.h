#include <stdlib.h>
#include <stdio.h>

struct Queue
{
    int head_index, tail_index;
    int capacity;
    int *elements;
};

struct Queue *create_queue(int capacity)
{
    if (capacity < 1)
    {
        create_queue(1);
    }

    struct Queue *new_queue = (struct Queue *)malloc(sizeof(struct Queue));
    new_queue->head_index = -1;
    new_queue->tail_index = -1;
    new_queue->capacity = capacity;
    new_queue->elements = (int *)malloc(capacity * sizeof(short));

    return new_queue;
}

int is_queue_empty(struct Queue **queue_to_check)
{
    int is_head_index_negative = (*queue_to_check)->head_index < 0;
    int is_head_index_greater_than_tail =
        (*queue_to_check)->head_index > (*queue_to_check)->tail_index;

    return is_head_index_negative | is_head_index_greater_than_tail;
}

int is_queue_full(struct Queue **queue_to_check)
{
    int number_of_elements =
        (*queue_to_check)->tail_index - (*queue_to_check)->head_index;
    int queue_size = number_of_elements + 1;

    return queue_size >= (*queue_to_check)->capacity;
}

void enqueue(int item_to_add, struct Queue **queue_to_enqueue)
{
    if (is_queue_empty(queue_to_enqueue))
    {
        (*queue_to_enqueue)->head_index = 0;
        (*queue_to_enqueue)->tail_index = -1;
    }

    if (is_queue_full(queue_to_enqueue))
    {
        printf("Queue full");
        return;
    }

    (*queue_to_enqueue)->tail_index++;
    (*queue_to_enqueue)->elements[(*queue_to_enqueue)->tail_index] = item_to_add;
}

int dequeue(struct Queue **queue_to_enqueue)
{
    if (is_queue_empty(queue_to_enqueue))
    {
        printf("Queue empty");
        (*queue_to_enqueue)->head_index = -1;
        (*queue_to_enqueue)->tail_index = -1;
        return -1;
    }

    int item_removed = (*queue_to_enqueue)->elements[(*queue_to_enqueue)->head_index];

    (*queue_to_enqueue)->head_index++;

    return item_removed;
}

void print_queue(struct Queue **queue_to_print)
{
    if (is_queue_empty(queue_to_print))
    {
        printf("Queue empty");
        (*queue_to_print)->head_index = -1;
        (*queue_to_print)->tail_index = -1;
        return;
    }

    int index = (*queue_to_print)->head_index;
    int last_index = (*queue_to_print)->tail_index;

    for (index; index <= last_index; index++)
    {
        printf("%i, ", (*queue_to_print)->elements[index]);
    }
}