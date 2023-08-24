# include <stdio.h>
# include <string.h>
# include <ctype.h>
/**
 * char *cap_string - functio to capitalizes all words of a string
 * i: input
 * s: string
 * Return: s (success)
 */
char *cap_string(char *s)
{
	int i;
	int length = strlen(s);

	for (i = 0; i < length; i++)
		s[i] = toupper(s[i]);
	return (s);
}
