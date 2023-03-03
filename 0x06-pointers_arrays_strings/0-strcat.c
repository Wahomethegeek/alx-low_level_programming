#include "main.h"

/**
 * _strcat - concatennates two strings
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
chat *_strcat(char *dest, char *src)
{
	int a;
	int j;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[a] = src[j];
		a++;
		j++;
	}
	dest[a] = '\0';
	return (dest);
}
