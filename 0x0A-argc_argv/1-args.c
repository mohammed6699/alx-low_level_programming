# include "main.h"
# include <stdio.h>
/**
 * main - function that prints the number of arguments passed into it
 * @argc: argument character
 * @argv: argument vector (void)
 * Description:  program that prints the number of arguments passed into it
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc < 0)
	{
		return (0);
	}
	else
	{
	printf("%d\n", argc - 1);
	}
	(void)argv;
	return (0);
}
