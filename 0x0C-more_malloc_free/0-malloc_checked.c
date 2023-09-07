# include "main.h"
# include <stdlib.h>

/**
 * malloc_checked - function that allocates the memory
 * @b: int
 * a: pointer
 * Description: function tht allocates the memory
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
