# include "main.h"
# include <string.h>
/**
 * _strspn - function  that gets the length of a prefix substring.
 * s: origin string
 * accept: substring
 * i:input
 * n: input
 * Return: (n)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int n = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
