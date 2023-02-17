#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char d;

	for (d = 'z'; d >= 'a'; d--)
		putchar(d);

	putchar('\n');

	return (0);
}
