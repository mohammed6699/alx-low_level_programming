# include "main.h"
/**
 *print_most_numbers - print numbers from 0 to 9 except 2,4
 *
 *@ch: The variable to be obtimated
 *
 * Return: 0 success
 */
void print_most_numbers(void)
{
	char ch;
	for (ch = '0'; ch <= '9'; ch++)

	{
            	if (ch != '2' && ch != '4')
		{
			_putchar(ch);
		}
	}
_putchar('\n');
}
