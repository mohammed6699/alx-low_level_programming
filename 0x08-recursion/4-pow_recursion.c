# include "main.h"
/**
 * _pow_recursion - function that returns
 * The value of x raised to the power of y
 * @y: input
 * @x: input
 * Description: Write a function that returns
 * The value of x raised to the power of y
 * Return: 1
 */
int _pow_recursion(int x, int y)
{
	if (y <= 0)
	{
		return (-1);
	}
	else if (y >= 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (1);
}
