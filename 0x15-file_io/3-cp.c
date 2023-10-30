#include "main.h"

/**
 * main - main
 * @ac: argument count
 * @av: argument vector
 *
 * Return: always 0
 */

int main(int ac, char **av)
{
	int fd_from;
	int fd_to;
	char buffer[1024];
	ssize_t bytes_read;

	if (ac != 3)
	{
		fprintf(stderr, "usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);

	if (fd_from == -1)
	{
		fprintf(stderr, "Error: can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
	{
		close(fd_from);
		fprintf(stderr, "Error: can't write to file %s\n", av[2]);
		exit(99);
	}
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) != EOF)
	{
		if (write(fd_to, buffer, bytes_read) != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			fprintf(stderr, "Error: can't write to file %s\n", av[2]);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		fprintf(stderr, "Error: can't read from file %s\n", av[1]);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		close(fd_to);
		fprintf(stderr, "Error: can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}
