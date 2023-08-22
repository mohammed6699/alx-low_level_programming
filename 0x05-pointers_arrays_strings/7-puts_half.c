# include "main.h"
# include <string.h>
/**
 *puts_half(char *str) - function to print string
 *length, i: inputs
 *str: string
 *Return: void
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int index =length/2 ;
	int i;
	for (i = index; i <= length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
