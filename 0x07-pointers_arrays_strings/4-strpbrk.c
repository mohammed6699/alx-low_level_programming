# include "main.h"
# include <string.h>
/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 * *s, *accept: const char
 * Return: (s)
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (char *) s;
			}
			temp++;
		}
		s++;
	}
	return (s);
}
