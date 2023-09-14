#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_strings - function to print string
 * @n: number of variables
 * @separator: separator
 * i: input
 * s: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list(args);

	va_start(args, n);

	if (separator == NULL)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);

		if (s == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", s);
		}
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
