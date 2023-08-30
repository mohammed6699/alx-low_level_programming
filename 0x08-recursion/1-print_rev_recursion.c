# include "main.h"
# include <string.h>
/**
 * _print_rev_recursion - function that prints a string in reverse
 * s: string
 * Description: to print the string in reverse
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
