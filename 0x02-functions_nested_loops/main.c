#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
test_islower(void)
{
int c;
c = islower('H');
putchar(c + '0');
c = islower('o');
putchar(c + '0');
c = islower(108);
putchar(c + '0');
putchar('\n');
return (0);
}
