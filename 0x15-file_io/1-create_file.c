#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - function that create a file
 * @filename: the file to be created
 * @text_content: NULL terminated string
 *
 * Return: 0 (success), -1 (fail)
 */

int create_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t result;

	if (filename == NULL)
		return (-1);

	file = fopen("filename", "w");

	if (file == NULL)
		return (-1);

	result = fwrite(text_content, sizeof(char), sizeof(text_content), file);
	if (result != strlen(text_content))
	{
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (0);
}
