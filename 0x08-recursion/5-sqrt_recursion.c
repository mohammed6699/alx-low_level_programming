# include "main.h"

/**
 * _sqrt_recursion - function that calculate
 * The squre root for an input
 * @n: input
 * Description: return the input value 
 * Return: (n)
 */
int squrt(int n, int m);
int _sqrt_recursion(int n)
	{
		return (squrt(n, 1));
	}
/**
 * squrt - functio to calc yhe square root
 * @n: input
 * @m: input
 * Dedcription: calculate the square root for an input
 * Return: (m) - true, (-1) - faile
 */
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
