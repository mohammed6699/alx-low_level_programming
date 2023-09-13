#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - function to exicute the code
 * @argc: argument count
 * @argv: argument vector
 * num1: input
 * num2: input
 * operator: pointer
 * Return: 0 (success)
 */
int main (int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[2]);
	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' && num2 == 0)
		|| (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
