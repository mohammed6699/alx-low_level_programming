# include "main.h"

/**
 * _sqrt_recursion - function that calculate
 * The squre root for an input
 * squrt - function to cal the square root for inputs
 * @n: input
 * @m: input
 * Description: calculate the square root for an input
 * Return: (1) - true, (0) - false
 */
int squrt(int n, int m);
int _sqrt_recursion(int n)
	{
		return (squrt(n, 1));
	}
int squrt(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	else if (m * m < n)
	{
		return (squrt(n, m + 1));
	}
	else
		return (-1);
}
