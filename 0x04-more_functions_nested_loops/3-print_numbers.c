# include "main.h"
/**
 *print_numbers - print numbers from 0 to 9
 *
 *@c: the character to be calculated
 *
 * Return: Return void
 */
void print_numbers(void)
{
	char ch;
	for (ch = '0'; ch <= '9'; ch++)
		putchar (ch);
	        putchar ('\n');
}
