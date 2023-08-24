# include "main.h"
# include <string.h>
# include <ctype.h>
/**
 * char *string_toupper - function to change
 * lower charachter to upper character
 * i: input
 * s: string
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;

	int length = strlen(s);
	for (i = 0; i < length; i++)

	s[i] = toupper(s[i]);
	return (s);
}
