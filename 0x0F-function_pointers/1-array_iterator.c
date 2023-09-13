# include <stdio.h>
# include "function_pointers.h"

/**
 *  array_iterator - that executes a function given as a parameter
 * @array: array to the function
 * @action: function
 * @size: size of an array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
