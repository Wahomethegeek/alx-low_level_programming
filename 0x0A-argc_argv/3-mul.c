#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers and result stored in an integer
 * @argc: number of arguments
 * @argv: size of array of argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

x = atoi(argv[1]);
y = atoi(argv[2]);
result = x *y;

	printf("%d\n", result);

	return (0);
}
