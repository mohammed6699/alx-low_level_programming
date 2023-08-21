# include "main.h"
# include <string.h>
/**
 * print_rev - function to print reverse string
 * @ len, i: inputs
 * Return: void
 */
void print_rev(char *s)
{
	int len;
	int i;
	while(*s != '\0')
	{
		len++;
		s++;
	}
	for(i = 0; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
