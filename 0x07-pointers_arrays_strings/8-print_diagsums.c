# include "main.h"
# include <stdio.h>
/**
 * _diagsums - function that prints the sum of
 * two diagonals of a square matrix of integers.
 * sum1, sum2: inputs
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int m;
	int sum1, sum2;

	for (m = 0; m < size; m++)
	{
		sum1 = a[m * size + 1];
	}
	for (m = size - 1; m >= 0; m--)
	{
		sum2 = sum1 + a[size - m + 1];
	}
	printf("%d %d\n", sum1, sum2);
}
