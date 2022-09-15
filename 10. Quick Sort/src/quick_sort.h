#include <stdio.h>

int partition(int **array_to_sort, int first_index, int last_index);

void sort(int **array_to_sort, int first_index, int last_index)
{
    int mid_index;

    if (last_index > first_index)
    {
        mid_index = partition(array_to_sort, first_index, last_index);

        sort(array_to_sort, first_index, mid_index - 1);
        sort(array_to_sort, mid_index + 1, last_index);
    }
}

int partition(int **array_to_sort, int first_index, int last_index)
{
    int pivot = (*array_to_sort)[last_index];
    int i = first_index;

    int current_value;

    for (int j = first_index; j < last_index; j++)
    {
        current_value = (*array_to_sort)[j];
        if (current_value < pivot)
        {
            (*array_to_sort)[j] = (*array_to_sort)[i];
            (*array_to_sort)[i] = current_value;
            i++;
        }
    }

    (*array_to_sort)[last_index] = (*array_to_sort)[i];
    (*array_to_sort)[i] = pivot;

    return i;
}

void print_array(int **array_to_print)
{
    int array_length = sizeof(*array_to_print) / sizeof(short);

    for (int i = 0; i <= array_length; i++)
    {
        printf("%i, ", (*array_to_print)[i]);
    }
}