# include "main.h"
# include <stdio.h>
/**
 *print_sign - print int
 *
 *@c: is the int to be printed
 *
 *Return: 1 for positive and 0 for zero and '-1' for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+1");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-1");
		return (-1);
	}
}
