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

for(i = *s; *s <= i - 1; s++);
for(*s = i - 1; *s >= i; s--);
_putchar(*s);
_putchar('\n');
}
