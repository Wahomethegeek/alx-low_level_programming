#include <stdio.h>

/**
 * main - Prints numbers of base 16
 * Return: 0
 */
int main(void)
{
	int n;
	char d;

	for (n = 0; n < 10; n++)
		putchar((num % 10) + '0');

	for (d = 'a'; d <= 'f'; d++)
		putchar(d);

	putchar('\n');

	return (0);
}
