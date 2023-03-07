#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int z, b, c, d = 0, x = 0;

	for (z = 0; z < size; z++)
	{
		c = (z * size) + z;
		d += *(a + c);
	}
	for (b = 0; b < size; b++)
	{
		c = (b * size) + (size - 1 - b);
		x += *(a + c);
	}
	printf("%z, %z\n", d, x);
}
