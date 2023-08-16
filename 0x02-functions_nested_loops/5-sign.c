# include "main.h"
# include <stdio.h>
/**
 *print_sign - print int
 *
 *@n: is the int to be printed
 *
 *Return: 1 for positive and 0 for zero and '-1' for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
	        _putchar(45);
		return (-1);
	}
}
