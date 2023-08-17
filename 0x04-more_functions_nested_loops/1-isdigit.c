# include "main.h"
/**
 *_isdigit - to print digits
 *
 *@c: the character to be checked
 *
 * Return: 1 for digits and 0 for anything else
 */
int _isdigit(int c)
{
	if (c == '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
