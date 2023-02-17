#include <stdio.h>

/**
 * main- Prints all posible combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		if (n == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putcar('\n');

	return (0);
}
