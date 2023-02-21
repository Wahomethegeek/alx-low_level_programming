#include "main.h"

/**
 * print_alphabet_x10- Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int num = 0;
	char d;

	while (num++ <= 9)
	{
		for (d = 'a'; d <= 'z'; d++)
			_putchar(d);
		_putchar('\n');
	}
}
