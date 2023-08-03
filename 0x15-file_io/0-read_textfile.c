#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads the text file and print to STDOUT.
 * @filename: the file being read
 * @letters: number of the letters being read
 * Return: actual number of bytes read and printed and 0 when filename fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t df;
	ssize_t z;
	ssize_t h;

	df = open(filename, O_RDONLY);
	if (df == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	h = read(df, buf, letters);
	z = write(STDOUT_FILENO, buf, h);

	free(buf);
	close(df);
	return (z);
}
