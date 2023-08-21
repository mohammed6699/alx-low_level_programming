# include "main.h"
/**
 * void _puts(char *str) - function to print string
 * *str - The pointer
 *@len : The input
 *Return: void
 */
void _puts(char *str)
{
	int len = 0;
	while (*(str + len) != '\0')

	{
		_putchar(*(str + len));
		len++;
	}
}
