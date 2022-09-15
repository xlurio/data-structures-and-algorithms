#include <stdio.h>

void print_array(int *array_to_print) {
  int array_allocated_memory = sizeof(array_to_print);
  int element_allocated_memory = sizeof(short);
  int array_length = (array_allocated_memory / element_allocated_memory) + 1;

  for (int index = 0; index < array_length; index++) {
    printf("%i\t", array_to_print[index]);
  }
}