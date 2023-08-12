# include <stdio.h>
/**
 * main - print decimal
 *
 * The basics of main function
 *
 * Return: always 0 (success)
 */
int main(void)
{
int ch1 = 0;
while (ch1 < 10)
{
putchar (ch1 + '0');
if (ch1 < 9)
{
putchar (',');
putchar (' ');
}
ch1++;
}
putchar ('\n');
return (0);
}
