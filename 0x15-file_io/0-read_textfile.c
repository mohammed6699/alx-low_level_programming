#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - function that that reads a text file
 * @filename: file name
 * @letters: size of the file
 * f: file
 * file: char
 * w, r: arguments
 * Description: function that return the number of chars
 * Return: (w) number of chars in the file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f;
	char *file;
	ssize_t w;
	ssize_t r;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	file = malloc(sizeof(char) * letters);

	r = read(f, file, letters);
	w = write(STDOUT_FILENO, file, r);

	free(file);
	close(f);
	return (w);
}
