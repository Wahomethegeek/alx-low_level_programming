#include "main.h"

/**
 * create_file - Creates a file
 * @filename: pointing to the name of the file being created
 * @text_content: pointer to a string to write to the file
 *
 * Return: If the function fails -1, else 1
 */
int create_file(const char *filename, char *text_content)
{
	int df, z, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	df = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	z = write(df, text_content, len);

	if (df == -1 || z == -1)
		return (-1);

	close(df);

	return (1);
}
