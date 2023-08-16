# include "main.h"
# include <stdio.h>
/**
 * main - check code
 *
 *islower - checkt the value of c
 *
 * Print - print c_value
 *
 * Return: Always 0 (success)
 */
int islower(int c)
{
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
