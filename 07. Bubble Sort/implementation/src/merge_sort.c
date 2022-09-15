#include "merge_sort.h"
#include <stdlib.h>

int main()
{
    printf("Creating array...\n");
    int *array_to_sort = (int *)malloc(5 * sizeof(short));
    array_to_sort[0] = 5;
    array_to_sort[1] = 1;
    array_to_sort[2] = 3;
    array_to_sort[3] = 2;
    array_to_sort[4] = 4;

    printf("\nArray created:\t");
    print_array(&array_to_sort);

    printf("\n************************\n");

    printf("Sorting array\n");
    sort(&array_to_sort);

    printf("\nArray sorted:\t");
    print_array(&array_to_sort);

    printf("\n");

    return 0;
}