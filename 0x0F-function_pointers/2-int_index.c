#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for interger
 * @array: array
 * @size: size
 * @cmp: pointer to the function
 * Return: interger
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == 0)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
