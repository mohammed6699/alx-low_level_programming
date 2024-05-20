#include "search_algos.h"

/**
 * *array: pointer to the first element of the array to search in
 * size: size of the array
 * value: value to search for
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n",i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
