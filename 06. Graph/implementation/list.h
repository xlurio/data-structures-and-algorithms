#include "base.h"

struct List
{
    int capacity;
    int size;
    int *elements;
};

struct List *create_list(int initial_capacity)
{
    if (initial_capacity < 1)
    {
        return create_list(1);
    }

    struct List *new_list = (struct List *)malloc(sizeof(struct List));
    new_list->capacity = initial_capacity;
    new_list->size = 0;
    new_list->elements = (int *)malloc(initial_capacity * sizeof(short));

    return new_list;
}

void resize_list(struct List **list_to_resize)
{
    (*list_to_resize)->capacity++;
    int *new_array = (int *)malloc((*list_to_resize)->capacity * sizeof(short));

    for (int i = 0; i < (*list_to_resize)->size; i++)
    {
        new_array[i] = (*list_to_resize)->elements[i];
    }

    free((*list_to_resize)->elements);
    (*list_to_resize)->elements = new_array;
}

void append_to_list(int item_to_push, struct List **list_to_push_to)
{
    if ((*list_to_push_to)->size >= (*list_to_push_to)->capacity)
    {
        resize_list(list_to_push_to);
    }

    (*list_to_push_to)->elements[(*list_to_push_to)->size] = item_to_push;
    (*list_to_push_to)->size++;
}

int get_item_from_list(int index, struct List **list_to_index)
{
    return (*list_to_index)->elements[index];
}