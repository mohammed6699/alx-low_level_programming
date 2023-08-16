# include "main.h"
# include <stdio.h>
/**
 * main - check code
 *
 * Print - print c_value
 *
 * Return: Always 0 (success)
 */
int _islower(int c)
{
int c;
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
putchar(c);
}
}
