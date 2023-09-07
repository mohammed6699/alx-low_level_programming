#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: no. of block
 * @size: size for each block
 * i: input
 * c: pointer to array
 * Description: function that allocates an array
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(size * nmemb);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		c[i] = 0;
	return (c);
}
