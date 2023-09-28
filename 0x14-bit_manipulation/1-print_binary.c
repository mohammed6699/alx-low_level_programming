#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that covert decimal to binary
 * @n: binary
 * Description: function that converts decimal to pinary
 */

void print_binary(unsigned long int n)
{
	int i;
	int count = 0;
	unsigned long int decimal;

	for (i = 63; i >= 0; i--)
	{
		decimal = n >> i;

		if (decimal & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
