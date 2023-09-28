#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that cobert binalry to decimal
 * @b: string
 * i: parameter
 * decimal: parameter
 * Description: function that converts binary numbers to decimal
 * Return: decimal
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		decimal *= 2;
		if (b[i] == '1')
		{
			decimal += ((b[i] - '0'));
		}
	}
	return (decimal);
}
