#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string
 * @s: String
 * Return: Length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
