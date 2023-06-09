#include "main.h"
/**
 *  _strlen - returns length of the string
 *  @d: charcter checked
 *  Return: 0;
 */
int _strlen(char *d)
{
	int a = 0;

	for (; *d++;)
		a++;
	return (a);
}
