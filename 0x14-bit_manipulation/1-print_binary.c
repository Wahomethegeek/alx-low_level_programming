#include "main.h"

/**
 * print_binary - printing the binary number equal to a decimal number
 * @n: The number printing the binary
 */
void print_binary(unsigned long int n)
{
	int z, add = 0;
	unsigned long int now;

	for (z = 63; z >= 0; z--)
	{
		now = n >> z;

		if (now & 1)
		{
			_putchar('1');
			add++;
		}
		else if (add)
			_putchar('0');
	}
	if (!add)
		_putchar('0');
}
