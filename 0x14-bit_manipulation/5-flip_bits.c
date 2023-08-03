#include "main.h"

/**
 * flip_bits - counting the number of bits to change
 * @n: first number
 * @m: the second number
 *
 * Return: number of bits being change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, add = 0;
	unsigned long int now;
	unsigned long int exclusive = n ^ m;

	for (z = 63; z >= 0; z--)
	{
		now = exclusive >> z;
		if (now & 1)
			add++;
	}

	return (add);
}
