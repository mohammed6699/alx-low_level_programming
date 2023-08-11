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
char ch2;
char ch3;
for (ch1 = 'a'; ch1 >= 'e'; ch1++)
{
putchar (ch1);
}
for (ch2 = 'f'; ch2 >= 'p'; ch2++)
{
putchar (ch2);
}
for (ch3 = 'r'; ch3 >= 'z'; ch3++)
{
putchar (ch3)
}
putchar('\n');
return (0);
}

