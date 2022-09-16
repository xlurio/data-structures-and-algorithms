#include <stdio.h>
#include <stdlib.h>

void merge_sort(int **array_to_sort, int first_index, int mid_index, int last_index);

void sort(int **array_to_sort, int first_index, int last_index)
{
    if ((last_index - first_index) >= 1)
    {
        int half_last = (last_index - first_index) / 2;
        int mid_index = half_last + first_index;

        sort(array_to_sort, first_index, mid_index);
        sort(array_to_sort, mid_index + 1, last_index);

        merge_sort(array_to_sort, first_index, mid_index, last_index);
    }
}

void merge_sort(int **array_to_sort, int first_index, int mid_index, int last_index)
{
    int result_size = last_index - first_index + 1;
    int *result_array = (int *)malloc(result_size * sizeof(short));

    int left_index = first_index;
    int right_index = mid_index + 1;
    int result_index = 0;

    int left_item, right_item;

    while (left_index <= mid_index && right_index <= last_index)
    {
        left_item = (*array_to_sort)[left_index];
        right_item = (*array_to_sort)[right_index];

        if (left_item < right_item)
        {
            result_array[++result_index] = left_item;
            left_index++;
        }
        else
        {
            result_array[++result_index] = right_item;
            right_index++;
        }
    }

    for (left_index; left_index <= mid_index; left_index++)
    {
        left_item = (*array_to_sort)[left_index];
        result_array[++result_index] = left_item;
    }

    for (right_index; right_index <= last_index; right_index++)
    {
        right_item = (*array_to_sort)[right_index];
        result_array[++result_index] = right_item;
    }

    int result_item;

    for (int i = 0; i < result_size; i++)
    {
        result_item = result_array[result_index--];
        (*array_to_sort)[--right_index] = result_item;
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