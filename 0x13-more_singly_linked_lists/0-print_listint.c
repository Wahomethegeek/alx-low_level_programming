#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all the elements of the linked list
 * @h: head of the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++, h = h->next)
	{
		printf("%d\n", h->n);
	}
	return (count);
}
