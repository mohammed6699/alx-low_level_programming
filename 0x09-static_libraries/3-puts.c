# include "main.h"
/**
 * void _puts(char *str) - function to print string
 * *str - The pointer
 *@len : The input
 *Return: void
 */
void _puts(char *str)
{
        while (*str != '\0')

        {
                _putchar (*str++);
        }
        _putchar ('\n');
}
