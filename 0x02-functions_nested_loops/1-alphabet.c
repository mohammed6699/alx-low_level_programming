# include "main.h"
# include <stdio.h>
/**
 * print_alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar ('\n');
}
