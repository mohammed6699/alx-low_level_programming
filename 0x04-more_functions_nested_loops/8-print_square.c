# include "main.h"
/**
 * print_square - print aquare on terminal
 *
 * @i,j: the variable to be compared
 *
 * Return: 0 success
 */
void print_square(int size)
{
	int i,j;
	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
	      	_putchar('\n');
	}
}
