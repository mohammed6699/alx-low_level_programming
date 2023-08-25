# include "main.h"
/**
 *reverse_array - function to reverse array
 * a: array we want to print
 * n: length af array
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	
	for (i = 0; i < n--; i++)
	{
	 j = a[i];
	 a[i] = a[n];
	 a[n] = j;
	}
}
