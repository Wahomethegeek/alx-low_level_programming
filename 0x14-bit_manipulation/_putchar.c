#include "main.h"
#include <unistd.h>
/**
 * _putchar - print char c to stdout
 * @c: printed character
 * Return: Success returns 1
 * On error, -1 returned, errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
