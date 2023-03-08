#include "main.h"

/**
 * _strlen_recursion - Prints the legth of a string
 * @s: String
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}
	return (x);
}

