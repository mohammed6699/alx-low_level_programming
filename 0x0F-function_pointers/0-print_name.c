#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints the name
 * @name: pointer
 * @f: pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
