# include "main.h"
/**
 * *leet - function to replace char
 * i: input
 * s: string
 * x, y: input string
 * Return: 0 (success)
 */
char *leet(char *s)
{
	char x[] = "aAEeOoTtiL";
	char y[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (s[i] == x[j])
	{
	s[i] = y[j];
	}
	}
	}
	return (s);
}
