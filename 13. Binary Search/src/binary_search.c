#include "binary_search.h"
#include <stdio.h>

int main()
{
    printf("Creating array...\n");
    int array_to_search[] = {5, 1, 3, 2, 4};

    printf("\nArray created:\t");

    printf("\n************************\n");

    printf("\nSearching value 3\n");
    int found_index = search_in_array(3, array_to_search);

    printf("\nValue 3 found at index: %i\n", found_index);

    printf("\n");

    return 0;
}