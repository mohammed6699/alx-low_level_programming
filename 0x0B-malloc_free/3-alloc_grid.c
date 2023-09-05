# include "main.h"
# include <stdlib.h>

/**
 * alloc_grid - function to print 2d array
 * @height: input
 * @width: input
 * i: input
 * m: 2d pointer
 * Return: m
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **m;

	if (height <= 0 || width <= 0)
		return (NULL);

	m = malloc(sizeof(int *) * height);
		for (i = 0; i < height; i++)
			m[i] = malloc(sizeof(int) * width);
	return (m);
}
