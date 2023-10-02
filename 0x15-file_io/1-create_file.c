#include "main.h"

/**
 * create_file: function tha creates a file
 * @filename: name of the file
 * @text_content: NULL terminated string to write to the file
 * Descrtion: fuction tha creates a file
 * Return: (0) success
 */

int create_file(const char *filename, char *text_content)
{
	FILE *ptrf;
	size_t result;

	if (filename == NULL)
		return (-1);

	ptrf = fopen("filename", "w");
	if (ptrf == NULL)
	return (-1);

	result = fwrite(text_content, sizeof(char), sizeof(text_content), ptrf);
	if (result != strlen(text_content))
	{
		fclose(ptrf);
		return (-1);
	}
	fclose(ptrf);
	return (0);
}
