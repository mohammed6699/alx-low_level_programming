# include "main.h"
# include <stdlib.h>
/**
 * *_strdup - function return a pointer to a new allocated array
 * @i: input
 * @n: size
 * *m: char
 * *str: pointer name
 * Description: function that return a pointer to a new allocated array
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i;
	int n;/*size of string*/
	char *m;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++);

	m = (char *)malloc(n * sizeof(char));
	if (m == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		m[i] = str[i];

	return (m);
}
