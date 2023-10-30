#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name od file
 * @text_content: string that adds to the end of a file
 *
 * Return: (1) success, (0) fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *ptrf;
	size_t result;

	if (filename == NULL || text_content == NULL)
		return (-1);

	ptrf = fopen(filename, "a");
	if (ptrf == NULL)
		return (-1);

	if (text_content != NULL)
	{
		result = fwrite(text_content, sizeof(char), strlen(text_content), ptrf);
		if (result != strlen(text_content))
		{
			fclose(ptrf);
			return (-1);
		}
	}
		fclose(ptrf);
		return (1);
}
