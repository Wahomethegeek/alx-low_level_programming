#include <stdio.h>
/**
 * main - prints number of arguments passed
 * @argc: number of command arguments
 * @argv: size of array argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc-1);
	return (0);
}
