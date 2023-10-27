#include "main.h"
#include <stdio.h>

/**
 * print_binary - function to print binary representation of a number
 * @: number
 */
void print_binary(unsigned long int n)
{
        int i;
        int count = 0;
        unsigned long int decimal;
        for (i = 63; i >= 0; i--)
        {
                decimal = n >> i;

                if (decimal & 1)
                {
                        _putchar('1');
                        count++;
                }
                else if (count)
                _putchar('0');
        }
        if (!count)
                _putchar('0');
}
