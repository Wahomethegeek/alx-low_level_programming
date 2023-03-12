#include <stdio.h>
#include <stdlib.h>
/**
 * main - all arguments printed
 * @argc: number of command line arguments
 * @argv: array size of argc
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
