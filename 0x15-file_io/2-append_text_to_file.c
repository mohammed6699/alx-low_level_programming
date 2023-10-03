#include "main.h"

/**
 * append_text_to_file - function tha appends a text to the end of a file
 * @filename: filename
 * @text_content: content of the text
 * ptrf: pointer to the file
 * result: variable to srore number of elements
 * Description: function that adds a line to the end of file
 * Return: 1 for (success), -1 for (fail)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *ptrf;
	size_t result;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

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
