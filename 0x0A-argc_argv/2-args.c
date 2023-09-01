# include "main.h"
# include <stdio.h>
/**
 * main - function that prints all arguments it receives.
 * @argc: argument count (void)
 * @argv: argument vector
 * Description: program that prints all arguments it receives.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	(void)argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
