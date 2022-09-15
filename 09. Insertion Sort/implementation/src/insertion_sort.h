#include <stdio.h>

void sort(int **array_to_sort)
{
    int array_length = sizeof(*array_to_sort) / sizeof(short);
    int current_value, to_check_index;

    for (int i = 1; i <= array_length; i++)
    {
        current_value = (*array_to_sort)[i];
        to_check_index = i - 1;

        while ((to_check_index >= 0) & ((*array_to_sort)[to_check_index] > current_value))
        {
            (*array_to_sort)[to_check_index + 1] = (*array_to_sort)[to_check_index];
            to_check_index--;
        }

        (*array_to_sort)[to_check_index + 1] = current_value;
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