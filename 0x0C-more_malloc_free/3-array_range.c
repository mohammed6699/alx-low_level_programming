# include "main.h"
# include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: min value
 * @max: max value
 * i: input
 * n: length of array
 * m: pointer to an array
 * Description: function that creates an array of integers
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i, n;
	int *m;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	m = malloc(sizeof(int) * n);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		m[i] = min;
		min++;
	}
	return (m);
}
