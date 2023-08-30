# include "main.h"

/**
 * _sqrt_recursion - function that calculate
 * The squre root for an input
 * @n: input
 * @m: input
 * squrt - function to calc square root
 * Description: return the input value 
 * Return: (n)
 */
int squrt(int n, int m);
int _sqrt_recursion(int n)
	{
		return (squrt (n, 1));
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
