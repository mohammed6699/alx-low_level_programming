#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that return the value of a given index
 * @index: the start
 * Return: index
 */

int get_bit(unsigned long int n, unsigned int index)
{
        int decimal;

        if (index > 63)
        return (-1);

        decimal = (n >> index) & 1;
        return (decimal);
}
