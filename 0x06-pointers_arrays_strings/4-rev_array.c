# include "main.h"
/**
 *reverse_array - function to reverse array
 * *a : pointer 
 * @n, X, Y : inputs
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int x, y;
	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[y] = a[n];
		a[n] = y;
	}
}
