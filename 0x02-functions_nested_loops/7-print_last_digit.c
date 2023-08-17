# include "main.h"
/**
 *print_last_digit
 *
 *@c: The number to be modefied
 *
 * Return: the absoulte number
 */
int print_last_digit(int c)
{
	int n;
	n = c % 10;
if (n < 0)
{
        n = -1 * n;  
}
	return (n);
}
