# include "main.h"
/**
 * print_alphabet_x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
char ch;
int c = 0;
while (c < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
c++;
_putchar('\n');
}
}
