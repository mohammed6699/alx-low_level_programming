# include "main.h"
/**
 *int _isupper
 *
 * @c: is the character to be obmited
 *
 * Return: 1 for upper case and 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
