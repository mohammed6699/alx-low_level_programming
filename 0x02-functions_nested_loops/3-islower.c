# include "main.h"
# include <stdio.h>
/**
 * main - check code
 *
 * Print - print__alphabet
 *
 * Return: Always 0 (success)
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z' )
{
return(1);
}
else
{
return (0);
putchar(c);
}

