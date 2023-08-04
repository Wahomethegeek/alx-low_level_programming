#include "main.h"

/**
 * append_text_to_file - appending a text to the end of a file
 * @filename: Pointer to the name of the file
 * @text_content: string to add to the end of the file
 * Return: if filename NULL -1, if file not exist use lack permissions. else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int z, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	z = open(filename, O_WRONLY | O_APPEND);
	w = write(z, text_content, len);

	if (z == -1 || w == -1)
		return (-1);

	close(z);

	return (1);
}
