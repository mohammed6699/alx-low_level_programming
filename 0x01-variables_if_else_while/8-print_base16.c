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
char ch1;
char ch2;
for (ch1 = '0'; ch1 <= '9'; ch1++)
{
putchar (ch1);
}
for (ch2 = 'a'; ch2 <= 'f'; ch2++)
{
putchar (ch2);
}
putchar ('\n');
return (0);
}
