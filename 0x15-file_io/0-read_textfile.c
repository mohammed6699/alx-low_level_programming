#include "main.h"

/**
 * read_textfile - function that reads a text file and print it to the terminal
 * @filename: file
 * @letters: number of letters
 * Return: number of chars
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file;
	char *fi;
	ssize_t r;
	ssize_t w;

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	fi = malloc(sizeof(char) * letters);
	r = read(file, fi, letters);
	w = write(STDOUT_FILENO, fi, r);

	free(fi);
	close(file);
	return (w);
}
