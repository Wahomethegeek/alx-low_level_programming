#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: occurence of a character
 * @s: in the string
 * Return: a pointer in the first occurence
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
