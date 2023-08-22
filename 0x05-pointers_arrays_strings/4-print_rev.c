# include "main.h"
# include <string.h>
/**
 * print_rev - function to print reverse string
 * @ legthn, i, middle: inputs
 * char: temp
 * s: string
 * Return: void
 */
void print_rev(char *s)
{
int i = 0;

while (s[i] != '\0')
{
	i++;
}
_putchar(s[i++]);
_putchar(s[i--]);
_putchar('\n');
}
