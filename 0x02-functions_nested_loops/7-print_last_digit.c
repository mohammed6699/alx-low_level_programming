# include "main.h"
# include <stdio.h>
/**
 *print_last_digit
 *
 *@c: The number to be modefied
 *
 * Return: the absoulte number
 */
int print_last_digit(int c)
{
	n = c % 10;
if (c < 0)
{
	printf ("%d", n);
	return (-1*n);
}
else 
{
	return (n);
}

return (0);
}
