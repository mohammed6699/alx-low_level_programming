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
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch ++)
{
putchar(ch);
}
putchar ('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
