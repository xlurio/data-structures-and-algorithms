#include "binary_search.h"
#include <stdio.h>

int main()
{
    printf("Creating array...\n");
    int array_to_search[] = {1, 2, 3, 4, 5};

    printf("\nArray created:\t");

    printf("\n************************\n");

    printf("\nSearching value 5\n");
    int found_index1 = search_in_array(5, array_to_search, 0, 4);

    printf("\nValue 5 found at index: %i\n", found_index1);

    printf("\n************************\n");

    printf("\nSearching value 6\n");
    int found_index2 = search_in_array(6, array_to_search, 0, 4);

    printf("\nValue 6 found at index: %i\n", found_index2);

    printf("\n************************\n");

    return 0;
}