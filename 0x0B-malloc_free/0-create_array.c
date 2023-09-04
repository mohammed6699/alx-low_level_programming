# include "main.h"
# include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * and initializes it with a specific char
 * i: input
 * m: pointer
 * @c: parameter
 * @size: size of pointer
 * Description: function that creates an array of chars
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *m = (char *)malloc(size * sizeof(char));

	if (m == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(m + i) = c;
	}
	return (m);
}
