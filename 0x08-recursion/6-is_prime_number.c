# include "main.h"
/**
 * is_prime_number - function that check if 
 * The input is primy or not
 * @n: input
 * @m: input
 * Description: Check if the input is primy or not
 * Return: (0) - false, (1) - true
 */
int primy (int n, int m);
int is_prime_number(int n)
{
	return (primy (n, 2));
}

int primy (int n, int m)
{
	if (n > 1 && m > n)
	{
	return (1);
	}
	else if (n <= 1 || n % m == 0)
	{
	return (0);
	}
	else
	return (primy(n, m+1));
}	
