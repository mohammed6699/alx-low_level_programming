# include "main.h"
/**
 *print_triangle - print the # as triangle shape
 *
 * @ i,j: the variables to be cakculated
 *
 * Return: 0 success
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)

{
_putchar('\n');
}
for (i = 0; i < size; i++)
{
for (j = 1; j < i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}                           
