# include "main.h"
/**
 * _islower - check for lower case
 *
 *@c: is the character to be checked
 *
 * Return: 1 for lowrcase character and 0 for any thing else
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
