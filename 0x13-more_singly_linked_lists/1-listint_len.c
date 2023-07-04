#include "lists.h"

/**
 * listint_len - prints number of elements
 * @h: The linked list
 *
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
