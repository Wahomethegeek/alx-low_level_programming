#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: big is rep by 0m, 1 for little
 */
int get_endianness(void)
{
	unsigned int z = 1;
	char *c = (char *) &z;

	return (*c);
}
