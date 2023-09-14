#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that print string of numbers
 * @separator: string
 * @n: number of variables
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);

		if (i != (n - 1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
