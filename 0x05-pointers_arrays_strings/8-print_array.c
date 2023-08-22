# include "main.h"
# include <stdio.h>
/**
 * print_array(int *a, int n) - function
 *@i: input
 * *a: string
 *@n: Length of array
 *Return: void
 */
void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	if (i != (n - 1))
	{
		printf(" , ");
	}
	}
	putchar('\n');
}
