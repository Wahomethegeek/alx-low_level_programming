#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a string to another string
 *
 * @s1: first char
 * @s2: second char
 * @n: unsigned int
 *
 * Return: if functions fails, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s2[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));

	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (x < len1)
	{
		s[x] = s1[x];
			x++;
	}

	while (n >= len2 && x < (len1 + len2))
		s[x++] = s2[j++];

	while (n >= len2 && x < (len1 + len2))

		s[x++] = s2[j++];

	s[x] = '\0';

	return (s);
}