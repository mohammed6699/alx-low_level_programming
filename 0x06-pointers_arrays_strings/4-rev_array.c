# include "main.h"
/**
 *reverse_array - function to reverse array
 * a : pointer
 * X, Y : inputs
 * n: size af array
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
	 _putchar(a[i]);
	}
}
