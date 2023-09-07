# include "main.h"
# include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size of string
 * i: input
 * x: input
 * y: input
 * Description: function that concatenates 2 strings
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int x;
	int y;
	char *m;

	if (s1 == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	n = x + y + 1;
	m = (char *)malloc(sizeof(char) * n);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < x ; i++)
		m[i] = s1[i];
	for (i = 0; i < y; i++)
		m[x + i] = s2[i];
	m[x + i] = '\0';
	return (m);
}
