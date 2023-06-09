#include "main.h"

/**
 * check - Helper function to recursively check for square root
 * @a: Current value to check
 * @b: Number to find the square root of
 * Return: Square root if found, -1 otherwise
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Integer to find the square root of
 * Return: Natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}

