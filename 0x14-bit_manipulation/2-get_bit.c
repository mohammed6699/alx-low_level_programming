#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at agiven index
 * @n: number
 * @index: index
 * Description: function that returns the value of a bit
 * Return: decimal
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int decimal;

	if (index > 63)
		return (-1);

	decimal = (n >> index) & 1;
	return (decimal);
}
