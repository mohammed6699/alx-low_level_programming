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
	c = c % 10;
if (c < 0)
{
	printf ("%d", c);
	return (-1*c);
}
else 
{
	return (c);
}

return (0);
}
