#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that return number of bits required to flib
 * @n: index
 * @m: index
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
        unsigned long int count = 0;

        while (n != 0 || m != 0)
        {
                if ((n & 1) != (m & 1))
        {
                count++;
        }
                n >>= 1;
                m >>= 1;
        }
        return (count);
}
