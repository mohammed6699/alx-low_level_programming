# include "main.h"
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
putchar (ch);
}
int main(void)
{
print_alphabet();
return (0);
}
