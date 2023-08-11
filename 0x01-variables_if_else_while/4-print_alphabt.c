#include <stdio.h>
/**
 * main - print alphapit
 *
 * The basic of main function
 *
 * Return: always 0 (success)
 */
int main(void)
{
char ch1;
for (ch1 = 'a'; ch1 <= 'p'; ch1++)
{
if (ch1 != 'e' && ch1 != 'q')
{
putchar (ch1);
}
putchar ('\n');
return (0);
}
