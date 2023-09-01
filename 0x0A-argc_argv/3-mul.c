# include "main.h"
# include <stdio.h>

/**
 * main - function that calculate the mul of 2 integers
 * @argc: argument count
 * @atgv: argument vector
 * @num1: first integer
 * @num2: second integer
 * @mul: multiplication of 2 integers
 * Description: calculate and print mul of 2 int
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 'A' || argc == 'Z')
	{
		printf ("null\n");
		return (1);
	}
	else 
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int mul = num1 * num2;

		printf ("%d\n", mul);
	}
	return (0);
}
