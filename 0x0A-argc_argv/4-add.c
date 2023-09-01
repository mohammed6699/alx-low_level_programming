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
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int sum = num1 + num2;

	if(num1 == 'A' && num1 == 'Z')
	{
		printf("Error\n");
		if (num1 == 'a' || num2 == 'z')
		{
			printf("Error\n");
		}
		return(1);
	}
	else
	{
		printf("%d\n", sum);
	}
	if (argc >= 0)
	{
		printf("%d\n", argc - 1);
	}
	return(0);
}
