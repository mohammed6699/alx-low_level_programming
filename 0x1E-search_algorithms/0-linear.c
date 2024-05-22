#include "search_algos.h"
/**
 * linear_search - function to search in all the list and the index
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Return: if the lst is not present retrun NULL, -1.
 * otherwie return the index for the element
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
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}

	return (-1);
}
