#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concentates 2 string
 * i: input
 * x: input
 * y: input
 * n: input
 * m: char
 * @s1: pointer
 * @s2: pointer
 * Description: function that concentates 2 strings
 * Return: m
 */
char *str_concat(char *s1, char *s2)
{
int i;
int x;
int y;
int n;
char *m;

if (s1 == NULL || s2 == NULL)
{
	return (NULL);
}
for (x = 0; s1[x] != '\0'; x++)
;
for (y = 0; s2[y] != '\0'; y++)
;
n = x + y + 1;
m = (char *)malloc(n *sizeof(char));
if (m == NULL)
return (NULL);
for (i = 0; i < x; i++)
	m[i] = s1[i];
for (i = 0; i < y; i++)
	m[x + i] = s2[i];
m[x + y] = '\0';
return (m);
}

