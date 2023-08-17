# include <stdio.h>
/**
 *print_line - n is the number of times to print the line
 *
 *@i: the value to be obmited
 *
 * Return: 0 success
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)

{
putchar('_');
}
putchar('\n');
}
