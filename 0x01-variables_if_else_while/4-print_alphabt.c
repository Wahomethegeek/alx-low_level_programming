#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 * Return: 0
 */
int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		if (d != 'e' && d != 'q')
			putchar(d);
	}

	putchar('\n');

	return (0);
}
