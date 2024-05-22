#include "search_algos.h"

/**
 * binary_search - search value for the sorted list
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: if the value is not present return NULL, -1
 * otherwise, the index of the element
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	return (binary_search_recursive(array, 0, size - 1, value));
}

/**
 * binary_search_recursive - search recusivly for every element in array
 * @array: array
 * @low: first element
 * @high: last element
 * @value: the value we search for
 *
 * Return: if the low > high, return -1,
 * if the mid is equal to the index, return the mid
 * if the mid > value, then stay in the right side and print all
 * if the mid < value stay in the left side and print
 * repeat all these steps until found the element and every time
 * print the list
 */

int binary_search_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid = low + (high - low) / 2;
	size_t i;

	if (low > high)
	{
		return (-1);
	}

	printf("searching in array: ");

	for (i = low; i <= high; ++i)
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

