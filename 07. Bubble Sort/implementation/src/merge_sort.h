#include <stdio.h>

void sort(int **array_to_sort)
{
    int array_length = sizeof(*array_to_sort) / sizeof(short);
    int previous_item, current_item, previous_index, current_index;

    for (int unsorted_size = array_length; unsorted_size > 0; unsorted_size--)
    {
        for (current_index = 1; current_index <= unsorted_size; current_index++)
        {
            previous_index = current_index - 1;

            previous_item = (*array_to_sort)[previous_index];
            current_item = (*array_to_sort)[current_index];

            if (current_item < previous_item)
            {
                (*array_to_sort)[previous_index] = current_item;
                (*array_to_sort)[current_index] = previous_item;
            }
        }
    }
}

void print_array(int **array_to_print)
{
    int array_length = sizeof(*array_to_print) / sizeof(short);

    for (int i = 0; i <= array_length; i++)
    {
        printf("%i, ", (*array_to_print)[i]);
    }
}