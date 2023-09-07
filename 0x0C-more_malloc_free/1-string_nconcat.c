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
 * k: size
 * Description: function that concatenates 2 strings
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int k;
	unsigned int x;
	unsigned int y;
	char *m;

	if (s1 == NULL)
		x = 0;
	else
	{
	for (x = 0; s1[x] != '\0'; x++)
		;
	}
	if (s2 == NULL)
		y = 0;
	else
	{
	for (y = 0; s2[y] != '\0'; y++)
		;
	}
	if (y > n)
		y = n;
	k = x + y + 1;
	m = (char *)malloc(sizeof(char) * k);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
		m[i] = s1[i];
	for (i = 0; i < y; i++)
		m[i + x] = s2[i];
	m[x + y] = '\0';
	return (m);
}
