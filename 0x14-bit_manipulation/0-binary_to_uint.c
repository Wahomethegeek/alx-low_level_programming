#include "main.h"

/**
 * binary_to_uint - binary number to unsigned int conversion
 * @z: string having the binary number
 * Return: the number converted
 */
unsigned int binary_to_uint(const char *z)
{
	int h;
	unsigned int dec_value = 0;

	if (!z)
		return (0);

	for (h = 0; z[h]; h++)
	{
		if (z[h] < '0' || z[h] > '1')
			return (0);
		dec_value = 2 * dec_value + (z[h] - '0');
	}
	return (dec_value);
}
