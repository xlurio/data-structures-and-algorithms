#include <stdio.h>

void sort(int **array_to_sort)
{
    int array_length = sizeof(*array_to_sort) / sizeof(short);
    int minimum_index, minimum_value, current_index, current_value;

    for (int i = 0; i < array_length; i++)
    {
        minimum_index = i;
        minimum_value = (*array_to_sort)[minimum_index];

        for (current_index = i + 1; current_index <= array_length; current_index++)
        {
            current_value = (*array_to_sort)[current_index];

            if (minimum_value > current_value)
            {
                minimum_index = current_index;
            }

            minimum_value = (*array_to_sort)[minimum_index];
        }

        if (minimum_index != i)
        {
            (*array_to_sort)[minimum_index] = (*array_to_sort)[i];
            (*array_to_sort)[i] = minimum_value;
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