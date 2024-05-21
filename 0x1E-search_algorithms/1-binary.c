#include "search_algos.h"

/*
 * array: pointer to the first element of the array to search in
 * size: the number of elements in array
 * value: the value to search for
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_recursive(array, 0, size - 1, value));
}

/**
 * search_recursive: search recusivly for every element in array
 * array: array
 * low: first element
 * high: last element
 * value: the value we search for
 */
int binary_search_recursive(int *array, size_t low, size_t high, int value)
{
        size_t mid = low + (high - low)/2;
        size_t i;

        if (low > high)
                return (-1);

        printf("searching in array: ");

        for  (i = low; i <= high; ++i)
        {
                printf("%d", array[i]);
                if (i < high)
                        printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
        {
                return (mid);
        }
        else if (array[mid] > value)
        {
		/*goess right*/

                return (binary_search_recursive(array, low, mid - 1, value));
        }
        else
        {
		/*goes left*/
                return (binary_search_recursive(array, mid + 1, high, value));
        }
}

