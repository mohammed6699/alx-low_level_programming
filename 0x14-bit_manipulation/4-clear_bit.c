#include <stdio.h>
#include "main.h"

/**
 *  clear_bit - function that sets the value to 0
 *  @n: string of numbers
 *  @index: index for spacific number
 *  Description: function that sets the valueto 0
 *  Return: (1) for success, (-1) for fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (*n & ~(1 << index));
	return (1);
}
