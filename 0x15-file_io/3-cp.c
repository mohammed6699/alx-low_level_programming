#include "main.h"


/**
 * main - check the code
 *
 * Return always 0
 */

int main (int argc, char *argv[])
{
	int fd_from, fd_to;
	char b[1024];
	ssize_t bytes_read;

	if (argc != 3)
	{
		dprintf (2, "Usage: %s file_from file_to \n", argv[0]);
		exit (97);
	}
	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		dprintf (2, "Error: can't read from file %s\n", argv[1]);
		exit (98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf (2, "Error: can't write to file %s\n", argv[2]);
		exit (99);
	}
	while ((bytes_read = read(fd_from, b, sizeof(b) > 0)))
	{
		if (write(fd_to, b, bytes_read) != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			dprintf (2, "can't write to the file %s\n", argv[2]);
			exit (99);
		}
	}
	if (close (fd_from) == -1)
	{
		close(fd_to);
		dprintf (2, "Error: can't close fd %d\n", fd_from);
		exit (100);
	}
	return (0);
}

