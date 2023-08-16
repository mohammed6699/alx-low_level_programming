 #include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */ 
int main(void)
{
    int c;
c = _islower('H');
putchar(c+'0');
c = _islower('o');
putchar(c + '0');
c = _islower(108);
putchar(c + '0');
putchar('\n');
return (0);
}

