#include "main.h"
#include "stdio.h"

/**
 * binary_to_uint - function that convert binary to unsigned int
 * @b: binary number
 * Return: decimal
 */

unsigned int binary_to_uint(const char *b)
{
        int i;
        unsigned int decimal = 0;

        if (!b)
        return (0);
                for (i = 0; b[i]; b++)
                {
                        if (b[i] < '0' || b[i] > '1')
                        {
                                return (0);
                        }
                        decimal *= 2;
                        if (b[i] == '1')
                        {
                                decimal += ((b[i] - '0'));
                        }
                }
                return (decimal);
}
