#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints the number of elements in a list
 * @h: head of list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++, h = h->next)
	{
		/*
		 * expected loop is empty
		 */
	}
	return (count);
}




