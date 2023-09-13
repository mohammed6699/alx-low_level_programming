#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - function that add 2 int
 * @a: argument 1
 * @b: argument 2
 * Return: a + b (addition)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that sub 2 int
 * @a: argument 1
 * @b: argument 2
 * Return: a - b (subtracting)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiply tw0 int
 * @a:argument 1
 * @b: argument 2
 * Return: a * b (multiplication)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divide 2 int
 * @a: argument 1
 * @b: argument 2
 * Return: a * b (multiplication)
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that module 2 int
 * @a:argument 1
 * @b: argument 2
 * Return: a % b (moduling)
 */
int op_mod(int a, int b)
{
	return (a % b);
}
