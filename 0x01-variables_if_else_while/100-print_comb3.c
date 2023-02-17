#include <stdio.h>

/**
 * main - Prints all posisble combinations of two different digits in an ascending order
 * Return: 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num1 % 10) + '0');

			if (num1 == 8 && num2 == 9)
				continue;
			putchar(',');
			puthchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
