#ifndef search_algos_h
#define search_algos_h

#include <stdio.h>
#include <stdlib.h>


/*prototypes*/

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_recursive(int *array, size_t low, size_t high, int value);
#endif
