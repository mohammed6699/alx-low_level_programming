#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: string of numbers
 * @index: index for the number
 * Description: function that sets the value of bit to 1
 * Return: (1) for success, and  (-1) for fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}
