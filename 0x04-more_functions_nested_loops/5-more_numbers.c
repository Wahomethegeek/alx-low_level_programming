#include "main.h"

/**
 * more_numbers - nmbr fct
 * Return: no return
 */

void more_numbers(void)
{

int a, b;
	for (a = 1; a <= 10; a++)
	{
		for (a = 0; b <= 14; b++)
		{
			if (b >= 10)
			_putchar('1');
			_putchar(b % 10 + '0');
		}
			_putchar('\n');
		}
}