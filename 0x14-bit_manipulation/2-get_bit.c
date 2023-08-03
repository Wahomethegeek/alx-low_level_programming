#include "main.h"

/**
 * get_bit - return a bit at an index in a decimal number
 * @n: number
 * @index: index to the bit
 *
 * Return: value of the bit
 */
int get_bit(usingned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
