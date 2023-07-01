#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*list_len - print number of elements in a linked list
*@h: name of list
*Return: the return type number of elements
*/

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
