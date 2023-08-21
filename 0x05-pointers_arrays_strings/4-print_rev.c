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
int length = strlen(s);
int middle = length / 2;
int i;
char temp;
for (i = 0; i < middle; i++)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
_putchar('\n');
}
