#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that print everything
 * @format: string
 * i: input
 * s: string
 * x: string
 */
void print_all(const char * const format, ...)
{
	char *s;
	char *x = "";
	int i = 0;

	va_list args;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", x, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", x, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", x, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
					{
						printf("nil");
					}
					printf("%s%s", x, s);
					break;
				default:
					i++;
					continue;
			}
			x = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
