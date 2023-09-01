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
	int num3 = atoi(argv[3]);
	int num4 = atoi(argv[4]);
	int num5 = atoi(argv[5]);
	int sum = num1 + num2 + num3 + num4 + num5;

	if (num1 == 'A' && num1 == 'Z')
	{
		printf("Error\n");
		return(1);
	}
	else if(num2 == 'a' || num2 == 'z')
	{
		printf("Error\n");
		return(1);
	}
	else if(num1 == 0 || num2 == 0)
	{
		printf("%d\n", 0);
	}
	else
	{
			printf("%d\n", sum);
	}
	(void)argc;
	return(0);
}
