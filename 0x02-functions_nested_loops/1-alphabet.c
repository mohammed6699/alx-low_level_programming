# include "main.h"
# include <stdio.h>
/**
 * main - check code
 *
 * Print - print__alphabet
 *
 * Return: Always 0 (success)
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
