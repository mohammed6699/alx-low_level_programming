#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets the value of bit to 1 at a given index
 * @n: number
 * @index: the place where you start
 * Return: (1) success, (-1) fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
        if (index > 63)
        return (-1);

        *n = (*n | (1 << index));
        return (1);
}
