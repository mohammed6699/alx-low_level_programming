# include "main.h"
# include <stdio.h>
/**
 * main - function to calculate the add of 2 int
 * @argc: argumenr count
 * @argv: argument vector
 * @num1: first int
 * @num2: second int
 * @sum: the add of inputs
 * Description: program to calculate the sum of 2 int
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, num3, num4, num5,  sum;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	num3 = atoi(argv[3]);
	num4 = atoi(argv[4]);
	num5 = atoi(argv[5]);
	sum = num1 + num2 + num3 + num4 + num5;

	if (argc != 5)
	{
		printf("Error\n");
			return (1);
	}
	if (num1 == 'a' || num2 == 'z')
	{
		printf("%d\n", 0);
		return (1);
	}
	printf("%d\n", sum);
	return (0);
}