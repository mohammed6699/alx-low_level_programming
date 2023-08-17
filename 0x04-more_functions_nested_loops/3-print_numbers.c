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
	char ch = 0; //* intiallize ch = '0'
	while(ch <=9) //* check if ch <= '9'
	{
		ch++; //* increment for ch
		_putchar (ch);
	}
	        _putchar ('\n');
}
