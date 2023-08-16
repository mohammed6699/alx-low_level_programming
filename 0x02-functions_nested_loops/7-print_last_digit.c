# include "main.h"
/**
 *print_last_digit
 *
 * @c: The number to be modefied
 *
 * Return: the absoulte number 
 */
int print_last_digit(int c)
{
if (c < 0)
{
	c = c % 10;
	printf ("%d", c);
	return (-1*c);
}
else (c >= 0)
{
	c = c % 10;
	return (c);
}
}
