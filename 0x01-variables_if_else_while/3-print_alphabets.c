# include <stdio.h>
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
for (ch1 = 'a'; ch1 <= 'z'; ch1++)
{
putchar (ch1);
}
for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
{
putchar (ch2);
}
putchar('\n');
return (0);
}
