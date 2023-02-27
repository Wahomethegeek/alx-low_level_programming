#include "main.h"
/**
 * swap_int - swap the value of two int
 * @a: first int
 * @b: second int
 * Return 0
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
